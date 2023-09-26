#include "ros/ros.h"
/* 
    演示参数的删除：
    实现：
        ros::Nodehandle
            delParam()
        ros::param
            del()
 */
int main(int argc, char *argv[])
{

    setlocale(LC_ALL,"");
    //初始化ros节点
    ros::init(argc,argv,"param_del_c");
    //创建节点句柄
    ros::NodeHandle nh;
    //删除
    //delParam

    bool flag1=nh.deleteParam("radius");
    if(flag1)
    {
        ROS_INFO("删除成功");
    }else{
        ROS_INFO("删除失败");

    }

    //del
    bool flag2=ros::param::del("radius_param");
    if(flag2)
    {
        ROS_INFO("删除成功");
    }else{
        ROS_INFO("删除失败");

    }
    return 0;
}
