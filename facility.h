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
#include<fstream>

using namespace std;

struct Facility
{
    int id;
    std::string name;
    bool istaken;
    std::string occupier;
    Facility* next;
};

void AddFacility(Facility *start)
{
    Facility *tempf=(Facility*)malloc(sizeof(Facility));
    while (1)
    {
        if(start->next!=NULL)
        {
            start=start->next;
        }
        else
        {
            std::cout<<"请输入设施名称:";
            std::cin>>tempf->name;
            std::cout<<"请输入设施编号:";
            std::cin>>tempf->id;
            tempf->istaken=false;
            tempf->occupier="none";
            start->next=tempf;
            tempf->next=nullptr;
            break;
        }
    }
    
}

bool InitFacility(Facility* start)
{

    fstream fp;
    fp.open("Facility.txt",ios_base::in);
    if(!fp)
    {
        printf("数据文件不存在\n");
        return false;
    }
    string temps;
    Facility *tempf,*endf;
    start=endf;
    for (size_t i = 0;fp.peek()!=EOF; i++)
    {
        tempf=(Facility*)malloc(sizeof(Facility));
        fp>>tempf->id>>tempf->name;
        fp>>temps;
        tempf->occupier=temps;
        fp>>tempf->istaken;
        //tempf->occupier
    }
    return true;
}

bool DeleteFacility(Facility *start,int num)
{
    bool isfind=false;
    if(start->next->id!=num)
    {
        start=start->next;
    }
    else
    {
        Facility* current=(Facility*)malloc(sizeof(Facility));
        current=start->next->next;
        free(start->next);
        start->next=current;
        isfind=true;
    }
    return isfind;
}

void PrintFacilityList(Facility *start)
{
    if(start->next!=__null)
    {
        printf("%d %8s  %8s %d",start->id,start->name.c_str(),start->occupier.c_str(),start->istaken);
    }
}