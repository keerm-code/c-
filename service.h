/*

**/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class Servicer
{
private:
    /* data */

public:
    Servicer(/* args */);
    ~Servicer();
    int object;
};

Servicer::Servicer(/* args */)
{
}

Servicer::~Servicer()
{
}

typedef vector<Servicer> ServList;
//Servicer[];

bool InitServList(ServList &list)
{
    fstream fp;//file *fp
    fp.open("serv.txt");
    if(!fp.is_open())
    {
        return false;
    }
    string temps;
    Servicer tempserv;
    for(int i=0;fp.peek()==EOF;i++)
    {
        getline(fp,temps);
        tempserv.object=atoi(temps.c_str());
        list.push_back(tempserv);
    }
    return true;
}

void AddNewServicer(ServList &list)
{
    Servicer a;
    a.object=-1;
    list.push_back(a);
}

bool FireServicer(ServList &list,int servicernum)
{
    if(servicernum>=list.size())
    {
        return false;
    }
    list[servicernum].object=-1;
    return true;
}

