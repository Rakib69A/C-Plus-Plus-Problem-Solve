#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int , int >p;
    p.first = 10;
    p.second = 20;
    cout<<p.first<<" "<<p.second<<endl;
    p = make_pair(123,321);
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , char > p2(100,'R');
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<string, pair<int ,char>>p3;
    p3 = make_pair("Rakib",make_pair(41,'A'));
    cout<<"Name :"<<p3.first<<endl<<"Roll No :"<<p3.second.first<<endl<<"Grade :"<<p3.second.second<<endl;
    return 0;
}
