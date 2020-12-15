//#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<fstream>

using namespace std;

struct House
{
    int loc;
    std::string owner; 
    bool isused; 
	int printf_house(HouseList house_list);
};

typedef std::vector<House> HouseList;

bool InitHouse(HouseList list)
{
	fstream fp;
	fp.open("house.txt",ios_base::in);
	if(!fp)
	{
		return false;
	}
	House temph;
	char* temps;
	int a;
	while(fp.peek()!=EOF)
	{
		//fscanf(fp,"%d%s%d",&temph.loc,temps,&a);
		fp>>temph.loc>>temph.owner>>a;
		temph.isused=a;
		//temph.owner=temps;
		//temph.owner=temps;
		list.push_back(temph);
		temph.isused=0;
		temph.loc=0;
		temph.owner="";
	}	
	return true;
}


int printf_house(HouseList house_list)
{
	int count_1 = 0;
	for (count_1 = 0;count_1  < house_list.size();count_1++)
	{
		printf("%d\t%15s%d\n",house_list[count_1].loc,house_list[count_1].owner.c_str(),house_list[count_1].isused);
	}

}