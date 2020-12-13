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
    //等于char* loc,不过本身提供一些方便的函数处理字符串，具体的参见连接
    //!连接：
    //*https://www.cnblogs.com/1906396809liufg/p/11095172.html
    std::string loc;
    //同样的等于char* owner
    std::string owner; 
    bool isused; 
};

//*vector是c🍀里的升级版数组结构（向量），vector<int>就相当于int [],但是vector提供了安全的越界检测和许多方法
//!同样参见连接
//*https://www.runoob.com/w3cnote/cpp-vector-container-analysis.html
typedef std::vector<House> HouseList;

bool InitHouse(HouseList &list)
{
    //todo:完成从文件中读取房屋表
}

void BuildNewHouse(HouseList &list)
{
    //todo:建新房(虽然可能没必要)
}

void DestoryHose(HouseList &list,int housenum)
{
    //todo：拆老房（虽然可能也没必要）
}

