function out = realdata_read_callback(data_name,sample_time_s)
persistent fid last_wheel_data_out last_imu_data_out last_ofs_data_out;
% filepath="/home/tfpeng/work/other/TFwork/code/mat/car_simulation/";
filepath="/home/tfpeng/";
if isempty(fid)
    fid=fopen(filepath+data_name,'r');
end
if isempty(last_wheel_data_out)
   last_wheel_data_out=[0,0];
   last_imu_data_out=[0,0,0,0,0,0];
   last_ofs_data_out=[0,0,0,0,0];
   last_right_wheel_data=[0,0];
end
starttim=0;
wheel_data=[];
left_wheel_data=[];
right_wheel_data=[];
imu_data=[];
ofs_data=[];
ofs_coeff=0.0254/300;
sample_time=sample_time_s*1000*1000*1000;
while 1
    line=fgetl(fid);
    if line==-1
        fclose(fid);
        fid=[];
        out= zeros(1,7)-1;
        return
    end
    newarr=split(line,': ');
    rawdataarr=split(newarr(2)," ");
    sensor_type=newarr(1);
    rawdata=str2double(rawdataarr);
    tim=rawdata(1);
    if starttim==0
        starttim=tim;
    end
    if contains(sensor_type,"leftwheel")
       left_wheel_data=[left_wheel_data;[rawdata(2),rawdata(3)]];
    elseif contains(sensor_type,"rightwheel")
       right_wheel_data=[right_wheel_data;[rawdata(2),rawdata(3)]];
    elseif contains(sensor_type,"imu")
       imu_data=[imu_data;reshape(rawdata(2:7),1,[])];
    elseif contains(sensor_type,"ofs")
       rawdata(2:3)=rawdata(2:3)*ofs_coeff;
       ofs_data=[ofs_data;reshape(rawdata(2:6),1,[])];
    end
    
    
    if tim-starttim>=sample_time
       break; 
    end
    
end
dt=(tim-starttim)/(1000*1000*1000);

diff_left_wheel_data=left_wheel_data(end,:)-left_wheel_data(1,:);

diff_right_wheel_data=right_wheel_data(end,:)-right_wheel_data(1,:);


wheel_data_out=[(diff_left_wheel_data(1)+diff_right_wheel_data(1))/dt,(diff_right_wheel_data(2)+diff_left_wheel_data(2))/dt];

imu_filter=0.05;

if ~isempty(imu_data)
    imu_data_out=mean(imu_data,1).*imu_filter+(1-imu_filter).*last_imu_data_out;
    last_imu_data_out=imu_data_out;
else
    imu_data_out=last_imu_data_out;
end
if ~isempty(ofs_data)
    ofs_data_out=sum(ofs_data,1);
    last_ofs_data_out=ofs_data_out;
else
    ofs_data_out=last_ofs_data_out;
end

%baise
% imu_data_out(1)=(imu_data_out(1)-0.008);
% imu_data_out(2)=(imu_data_out(2)+0.027);
% imu_data_out(6)=(imu_data_out(6)+0.002);

% imu_data_out(1)=(imu_data_out(1)*1.0007-0.006)*9.8;
% imu_data_out(2)=(imu_data_out(2)*0.9961+0.021)*9.8;
% imu_data_out(6)=(imu_data_out(6)+0.002);

imu_data_out(1)=(imu_data_out(1)*1.0007-0.01)*9.8;
imu_data_out(2)=(imu_data_out(2)*0.9961+0.03)*9.8;
imu_data_out(6)=(imu_data_out(6)+0.002);

out=[wheel_data_out,imu_data_out(1),imu_data_out(2),imu_data_out(6),ofs_data_out(1),ofs_data_out(2)];
