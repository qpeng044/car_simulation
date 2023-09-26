function y = ImuOdm(ax_imu,ay_imu,w,dt)
persistent pos vx_last vy_last ax_last ay_last w_last;
if isempty(pos)
    pos=zeros(3,1);
    vx_last=0;
    vy_last=0;
    ax_last=0;
    ay_last=0;
    w_last=0;
end

dtheta=(w+w_last)*0.5*dt;
ax=ax_imu*cos(pos(3)+dtheta)-ay_imu*sin(pos(3)+dtheta);
ddx=vx_last*dt+(ax+ax_last)*dt^2/4;

ay=ax_imu*sin(pos(3)+dtheta)+ay_imu*cos(pos(3)+dtheta);
ddy=vy_last*dt+(ay+ay_last)*dt^2/4;

% ax=ax_imu*cos(pos(3)+dtheta)+ay_imu*sin(pos(3)+dtheta);
% ddx=vx_last*dt+(ax+ax_last)*dt^2/4;
% 
% ay=ax_imu*sin(pos(3)+dtheta)-ay_imu*cos(pos(3)+dtheta);
% ddy=vy_last*dt+(ay+ay_last)*dt^2/4;

vx_last=vx_last+(ax+ax_last)*dt/2;
vy_last=vy_last+(ay+ay_last)*dt/2;
ax_last=ax;
ay_last=ay;
w_last=w;
pos=pos+[ddx;ddy;dtheta];
y = pos;

