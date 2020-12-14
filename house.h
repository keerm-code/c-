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