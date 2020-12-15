/*
班车头文件
需要实现：
1.定义出班车结构体（包含班车途径站点，班车是否运行）
//提示，班车站点最好采用链表形式
2.定义班车数组，把所有班车存储在数组内
3.写一个函数，让会员和服务人员能通过坐班车在站点之间移动
//提示，要判断是否有班车可以把人员带到此站点
4.写一个函数，用来创建新的班车
5.写一个函数，用来删除旧的班车
6.写两个函数，用来删除、创建新站点(可选)
**/

/*
----------作者----------
    ：              ：
**/
//#include<stdio.h>
#include<iostream>
#include<vector>
#include<array>
#include<fstream>
#include<string>

using namespace std;

class Bus
{
    public:
        //成员
        //!等于char[2][] station,0是起始站，1是终点站
        std::array<string,2> station;//TODO:把该数组改成可存储多个站点的链表
        bool isrun;
        int num;
        //方法
        //!0是起始站，1是终点站
        string take(int startorend);
        Bus();
        ~Bus();
};

Bus::Bus()
{

}

Bus::~Bus()
{

}

string Bus::take(int startorend)
{
    if(startorend==0)
    {
        return station[0];
    }
    else
    {
        return station[1];
    }
}

typedef vector<Bus> Buslist;

bool initbuslist(Buslist &list)
{
    fstream fp;
    fp.open("bus.txt",ios_base::in);
    if(!fp.is_open())
    {
        return false;
    }
    else
    {
        string temps;//tempstring
        Bus tempbus;
        for(int i=0;fp.peek()!=EOF;i++)
        {
            
            getline(fp,temps);
            tempbus.num=i;
            tempbus.isrun=true;
            tempbus.station[0]=temps.substr(0,temps.find(' '));
            tempbus.station[1]=temps.substr(temps.find(' ')+1,temps.length());
            list.push_back(tempbus);
            temps="";
            tempbus.~Bus();
        }
    }
    fp.close();
    return true;
}

void printbuslist(Buslist list)
{
    for (size_t i = 0; i < sizeof(list); i++)
    {
        cout<<list[i].num<<"\t"<<list[i].station[0]<<"\t"<<list[i].station[1]<<endl;
    }
}

void savebus(Buslist list)
{
    fstream fp;
    fp.open("bus.txt");
    for (size_t i = 0; i < sizeof(list); i++)
    {
        fp<<list[i].num<<"\t"<<list[i].station[0]<<"\t"<<list[i].station[1]<<endl;
    }
    fp.close();
}