#include"member.h"

int main()
{
    bool b;
    Buslist buslist;
    b=initbuslist(buslist);
    if(!initbuslist)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }
    bool b;
    Facility *facility=(Facility*)malloc(sizeof(Facility));
    b=InitFacility(facility);
    if(!InitFacility)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }




    bool b;
    MemberList memberlist;
    b=initbuslist(buslist);
    if(!initbuslist)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }






     bool b;
    ServList servlist;
    b=InitServList(servlist);
    if(!InitServList)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }

    bool b;
    HouseList houselist;
    b=InitHouse(houselist);
    if(!InitHouse)
    {
        printf("数据库损坏，无法初始化\n");
        exit(-1);
    }
    int choose;
    printf("*****欢迎来到夕阳红老年社区管理系统*****\n");
    printf("1.管理系统\n");
    printf("2.用户系统\n");
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
    printf("7.新增班车\n");  
    printf("8.删除班车\n"); 
    int z;
    scanf("%d",&z);
    if(z==1)

    if(z==2)

    if(z==3)

    if(z==4)

    if(z==5)

    if(z==6)

    if(z==7)
    
    if(z==8)



        break;
    
    case 2:
    printf("***************用户系统***************\n");
    printf("1.购房");
    printf("2.选择设施");
    printf("3.选择服务");
    printf("4.班车时间表");
    int c;
    if(c==1)

    if(c==2)

    if(c==3)

    if(c==4)
    
        break;
    }































































































































}