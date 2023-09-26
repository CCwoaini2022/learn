#include "ros/ros.h"
/* 


 */


int main(int argc, char  *argv[])
{
    //初始化ros节点
    ros::init(argc, argv,"set_param_c");

    //创建ros节点句柄
    ros::NodeHandle nh;
    //参数增
    //方案1：nh
    nh.setParam("type","xiaoHuang");
    nh.setParam("radius",0.15);
    //方案2：ros：：param
    ros::param::set("type_param","xiaoBai");
    ros::param::set("radius_param",0.15);
    //参数改
    //方案1：nh
    nh.setParam("radius",0.88);

    //方案2：ros：：param
    ros::param::set("radius_param",0.99);
    return 0;
}
