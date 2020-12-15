/*
会员头文件
需要实现：
1.定义会员结构体,包含会员姓名，住所,已占用设施等信息
2.用链表/数组存储会员结构体信息
3.写函数实现会员的添加删除修改
4.写函数，让会员能买卖房屋，占用/解除占用设施，选择服务人员,入住房屋等；
**/
//  TODO：从文件读取会员信息，添加/删除会员，查询会员,打印会员列表
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


    /* data */
public:
    bool BuyHouse(HouseList List);
    Member(string n_name,int n_loc,int n_f/* args */);
    Member();
    ~Member();
    int Access_facility(Facility*head);
    int num;
    int Service_personnel(ServList list);
    int Check_in (HouseList list_house);
    string name;
    int houseloc;
    int facilitytaken;
};

Member::Member(string n_name,int n_loc,int n_f/* args */)
{
    name=n_name;
    houseloc=n_loc;
    facilitytaken=n_f;
}

Member::Member()
{

}

Member::~Member()
{
}

bool Member::BuyHouse(HouseList List)
{      int x=0;
    for (size_t i = 0; i < List.size(); i++)
    {
        if(List[i].isused==0)
        {   
            
            houseloc=List[i].loc;
            List[i].owner=name;
            printf("您已购买了%d号房",List[i].loc);
            x++;  
            return true;  
        }
        
    }   if(x==0)
        {
            printf("没有空房了。");
            return false;
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

int Member::Service_personnel(ServList list)

{
    int i = 0;
    while (1)
    {
        if(list[i].object != -1)
        {
            i++;
        }
        else
        {
            list[i].object = num;
            break;
        }
        
    }

}

int Check_in (HouseList list_house)

{
    int count = 0;
    while (1)
    {
        if (list_house[count].loc != count)
        {
             count++;
        }
        else
        {
            list_house[count].isused = 1;
            break;
        }
    }
}

bool initmember(MemberList list)
{
    fstream fp;
    fp.open("member.txt");
    if(!fp)
    {
        return false;
    }
    Member tempm;
    string n_name;
    int nloc,nf;
    while(fp.peek()!=EOF)
    {
        int i=0;
        fp>>n_name>>nloc>>nf;
        tempm.num=i;
        i++;
        tempm=Member(n_name,nloc,nf);
        list.push_back(tempm);
    }
    return true;
}

bool membersave(MemberList list)
{
    fstream fp;
    fp.open("member.txt");
    for(int i=0;i<sizeof(list);i++)
    {
        fp<<list[i].name<<list[i].houseloc<<list[i].facilitytaken;
    }
    fp.close();
}