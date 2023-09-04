function xy_plot(data)
persistent rawline estimation_line;

if isempty(rawline)
    rawline=animatedline('Color','r','Marker','+');
end
if isempty(estimation_line)
    estimation_line=animatedline('Color','b','Marker','*');
end

addpoints(rawline,data(1),data(2))
addpoints(estimation_line,data(3),data(4))
end