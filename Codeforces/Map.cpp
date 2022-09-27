#include<iostream>
using namespace std;
#include<map>
#include<iterator>
int main()
{
    map<string ,int >m;
//    m["xx"] = 100;
//    m["yy"] = 200;
//    m["xz"] = 300;
//
//    m["a"]=300;
//    m["b"]=400;
//
//    map<string,int>::iterator it;
//    for(it=m.begin();it!=m.end();it++)
//    {
//
//        cout<<it->first<<" = "<<it->second<<endl;
//    }
    m.insert(pair<string,int>("xx",100));
    m.insert(pair<string,int>("xy",200));
    m.insert(pair<string,int>("yx",300));
    m.insert(pair<string,int>("ax",400));

    map<string,int>m2(m.begin(),m.end());
    map<string , int>::iterator it;
//    m2.erase("xx");
//    m2.erase(m2.begin(),m2.find("xx"));
    m2.erase(m2.find("xx"),m2.end());
//    m2.clear();
    for(it=m2.begin();it!=m2.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
