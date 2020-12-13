/*
会员头文件
需要实现：
1.定义会员结构体,包含会员姓名，住所,已占用设施等信息
2.用链表/数组存储会员结构体信息
3.写函数实现会员的添加删除修改
4.写函数，让会员能买卖房屋，占用/解除占用设施，选择服务人员,入住房屋等；
**/
#include"bus.h"
#include"facility.h"
#include"house.h"
#include"service.h"
#include"ui.hpp"

using namespace std;
class Member
{
private:
    string name;
    vector<House> estates;
    Facility facilitytaken;

    /* data */
public:
    Member(/* args */);
    ~Member();
};

Member::Member(/* args */)
{
}

Member::~Member()
{
}

typedef vector<Member> MemberList;