#include<iostream>
using namespace std;
int main()
{
    pair < int , int > p;
    p.first = 10;
    p.second = 20;
    cout<<p.first<<"  "<<p.second<<endl;
    pair <string , int >p2;
    p2 = make_pair("Rakib Hasan",190141);
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<string ,int >p3(p2);
    cout<<p3.first<<" "<<p3.second<<endl;
    pair < string , pair < string , int > > pr;
    pr = make_pair("Nested pair",make_pair("MRH",118800));
    cout<<pr.first<<" "<<pr.second.first<<" "<<pr.second.second<<endl;
}
