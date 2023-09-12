function out = realdata_read_callback(data_name,sample_time_s)
persistent fid last_wheel_data_out last_imu_data_out last_ofs_data_out last_left_wheel_data last_right_wheel_data;
filepath="/home/tfpeng/work/other/TFwork/code/mat/car_simulation/";
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
    newarr=split(line,': ');
    rawdataarr=split(newarr(2)," ");
    sensor_type=newarr(1);
    rawdata=str2double(rawdataarr);
    tim=rawdata(1);
    if starttim==0
        starttim=tim;
    end
    if contains(sensor_type,"leftwheel")
%         if isempty(last_left_wheel_data)
%           last_left_wheel_data=[rawdata(1),rawdata(2)];
%           out= zeros(1,7);
%           return;
%         end
       left_wheel_data=[left_wheel_data;[rawdata(2),rawdata(3)]];
       last_left_wheel_data=left_wheel_data;
       
    elseif contains(sensor_type,"rightwheel")
%         if isempty(last_right_wheel_data)
%           last_right_wheel_data=[rawdata(1),rawdata(2)];
%           out= zeros(1,7);
%           return;
%         end
       right_wheel_data=[right_wheel_data;[rawdata(2),rawdata(3)]];
       last_right_wheel_data=right_wheel_data;
    elseif contains(sensor_type,"imu")
       imu_data=[imu_data;rawdata(2:7)];
    elseif contains(sensor_type,"ofs")
       ofs_data=[ofs_data;rawdata(2:6)*ofs_coeff];
    end
    
    
    if tim-starttim>=sample_time
       break; 
    end
    
end

if ~isempty(left_wheel_data)
    left_wheel_data_mean=mean(left_wheel_data,1);
end

if ~isempty(right_wheel_data)
    right_wheel_data_mean=mean(right_wheel_data,1);
end


wheel_data_out=[left_wheel_data_mean(1)+right_wheel_data_mean(1),left_wheel_data_mean(2)-right_wheel_data_mean(2)];

if ~isempty(imu_data)
    imu_data_out=mean(imu_data,1);
    last_imu_data_out=imu_data_out;
else
    imu_data_out=last_imu_data_out;
end
if ~isempty(ofs_data)
    ofs_data_out=mean(ofs_data,1);
    last_ofs_data_out=ofs_data_out;
else
    ofs_data_out=last_ofs_data_out;
end

out=[wheel_data_out,imu_data_out(1),imu_data_out(2),imu_data_out(6),ofs_data_out(1),ofs_data_out(2)];