/*
设施头文件
需要实现
1.创建设施结构体，存储设施名称、地点、功能、是否被占用和被占用的时间段
2.实现两个函数，用来增加和删除设施
3.实现一个函数，用来占用设施
4.用一个链表/数组存放设施
**/


#include<iostream>
#include<string>

struct Facility
{
    std::string name;
    bool istaken;
    std::string occupier;
    Facility* next;
};

void InitFacility(Facility* start)
{
    
}

void AddFacility(Facility *start)
{

}

bool DeleteFacility(Facility *start,int num)
{

}

void PrintFacilityList(Facility *start)
{

}