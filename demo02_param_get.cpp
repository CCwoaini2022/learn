#include "ros/ros.h"

int main(int argc, char *argv[])
{
    //设置编码
    setlocale(LC_ALL,"");
    //初始化ros节点
    ros::init(argc,argv,"get_param_c");
    //创建节点句柄
    ros::NodeHandle nh;

    //ros::NodeHandle
    //1.param
    double radius=nh.param("radius",0.5);
    ROS_INFO("radius=%.2f",radius);
    //2.getparam
    double radius2=0.5;
    bool reslut=nh.getParam("radius",radius2);
    if(reslut)
    {
        ROS_INFO("huoque 获取到的参数是%.2f",radius2);    
    }else{
        ROS_INFO("备查询的参数不存在");
    }
    //3.getParamCached
    double radius3=0.5;
    bool reslut1=nh.getParamCached("radius",radius3);
    if(reslut1)
    {
        ROS_INFO("huoque 获取到的参数是%.2f",radius3);    
    }else{
        ROS_INFO("备查询的参数不存在");
    }
    //4.getParamNames
    std::vector<std::string> names;
    nh.getParamNames(names);
    for(auto &&name:names)
    {
        ROS_INFO("遍历的元素：%s",name.c_str());

    }
    //5.hasParam
    bool flag1=nh.hasParam("radius");
    bool flag2=nh.hasParam("radiusxx");
    ROS_INFO("radius存在吗 %d",flag1);
    ROS_INFO("radiusxx存在吗 %d",flag2);
    //6.searchParam
    std::string key;
    nh.searchParam("radius",key);
    ROS_INFO("搜索的记过：%s",key.c_str());
    
    //ros::param
    double radius_param=ros::param::param("radius",100.58);
    ROS_INFO("结果是：%.2f",radius_param);
    
    std::vector<std::string> names_param;
    ros::param::getParamNames(names_param);
    for(auto &&name:names_param)
    {
        ROS_INFO("键是：%s",name.c_str());
    }
    return 0; 
}
