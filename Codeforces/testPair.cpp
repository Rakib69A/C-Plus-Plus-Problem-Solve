#include<iostream>
using namespace std;
int main()
{
    pair < int , int > p;
    p.first = 10;
    p.second = 20;
    cout<<p.first<<" "<<p.second<<endl;
    p = make_pair(100,200);
    cout<<p.first<<" "<<p.second<<endl;
    pair < string , pair < int , char > > R;
    R = make_pair("Rakib" , make_pair(4,'A'));
    cout<<R.first<<" "<<R.second.first<<" "<<R.second.second<<endl;
}
