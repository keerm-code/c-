/*
会员头文件
需要实现：
1.定义会员结构体,包含会员姓名，住所,已占用设施等信息
2.用链表/数组存储会员结构体信息
3.写函数实现会员的添加删除修改
4.写函数，让会员能买卖房屋，占用/解除占用设施，选择服务人员,入住房屋等；
**/

//占用解除占用设施，选择服务人员，房屋入住。
#include"bus.h"
#include"facility.h"
#include"house.h"
#include"service.h"
#include<algorithm>
//#include"ui.hpp"

using namespace std;
class Member
{
private:
    string name;
    House estates;
    int facilitytaken;

    /* data */
public:
    bool BuyHouse(HouseList List);
    Member(/* args */);
    ~Member();
    int Access_facility(Facility*head);
};

Member::Member(/* args */)
{
}

Member::~Member()
{
}

bool Member::BuyHouse(HouseList List)
{
    for (size_t i = 0; i < List.size(); i++)
    {
        if(List[i].isused==0)
        {       
            break;
        }
        
    }
    

}

typedef vector<Member> MemberList;

int Member::Access_facility(Facility*head)
{
    Facility *current = head;
    while(1)
    {
        if(current->istaken == 1)
        {
            current = current->next;
        }
        else
        {
            current->istaken = 1;
            current->occupier = name;
            facilitytaken = current->id;
            break;
        }
    }
}
