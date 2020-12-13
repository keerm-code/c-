/*
房屋头文件
需要实现：
1.定义房屋结构体，包含房屋编号，位置，主人
7.写一个建筑新房的函数
**/

#include<iostream>
#include<string>
#include<vector>
struct House
{
    std::string loc;
    std::string owner; 
    bool isused; 
};

typedef std::vector<House> HouseList;

bool InitHouse(HouseList &list)
{

}

void BuildNewHouse(HouseList &list)
{

}

void DestoryHose(HouseList &list,int housenum)
{

}

