#include"member.h"
int num;
int servicernum;
//bool BuyHouse(HouseList List);
//int Access_facility(Facility*head);
//int Service_personnel(ServList list);
//void AddFacility(Facility *start);
//bool DeleteFacility(Facility *start,int num);
//void AddNewServicer(ServList &list);
//bool FireServicer(ServList &list,int servicernum);
//bool initmember(MemberList list);
int main()
{
    bool b;
    Buslist buslist;
    b=initbuslist(buslist);
    if(!b)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }

    
    Facility *facility=(Facility*)malloc(sizeof(Facility));
    b=InitFacility(facility);
    if(!b)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }


    MemberList memberlist;
    b=initmember(memberlist);
    if(!b)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }

    
    ServList servlist;
    b=InitServList(servlist);
    if(!b)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }

    //bool b;
    HouseList houselist;
    b=InitHouse(houselist);
    if(!b)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }
    int choose;
    cout<<"*****夕阳红老年社区管理系统*****\n";
    printf("1.管理系统\n");
    printf("2.用户系统\n");
    printf("0.退出\n");
    printf("*************************************\n");
    printf("请输入选项前的数字进行选择:\n");
    fflush(stdin);
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
    printf("***************管理系统***************\n");
    printf("1.新增会员\n");
    printf("2.删除会员\n");
    printf("3.新增设施\n");
    printf("4.删除设施\n");
    printf("5.新增服务人员\n"); 
    printf("6.删除服务人员\n");  
    printf("0.退出"); 
    int z;
    scanf("%d",&z);
    if(z==1)
    {
        string temps;
        printf("请依次输入会员名：");
        cin>>temps;
        Member newm(temps,-1,-1);
        memberlist.push_back(newm);
        membersave(memberlist);
    }
    if(z==2)
    {
        int tempn;
        printf("请输入要删除的会员编号");
        scanf("%d",&tempn);
        memberlist.erase(memberlist.begin()+tempn);
        membersave(memberlist);
    }
    if(z==3)
    AddFacility(facility);
    if(z==4)
    DeleteFacility(facility,num);
    if(z==5)
    AddNewServicer(servlist);
    if(z==6)
    FireServicer(servlist,servicernum);
    if(z==0)
    exit(-1);

       break;
    
    case 2:
    printf("***************用户系统***************\n");
    printf("请输入会员编号\n");
    int x;
    scanf("%d",&x);
    if(x>=sizeof(memberlist))
    {
        printf("用户不存在\n");
        exit(-1);
    }
    printf("1.购房\n");
    printf("2.选择设施\n");
    printf("3.选择服务\n");
    printf("4.班车表\n");
    int c;
    if(c==1)
    memberlist[x].BuyHouse(houselist);
    membersave(memberlist);
    if(c==2)
    memberlist[x].Access_facility(facility);
    membersave(memberlist);
    if(c==3)
    memberlist[x].Service_personnel(servlist);
    membersave(memberlist);
    if(c==4)
    printbuslist(buslist);
    if(c==0)
    exit(-1);
    
        break;
    }































































































































}