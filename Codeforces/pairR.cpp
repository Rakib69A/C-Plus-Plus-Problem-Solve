#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair <int,char>p;
    p.first = 10;
    p.second = 'A';
    cout<<p.first<<" "<<p.second<<" "<<endl;

    p = make_pair(20, 'B');

    cout<<p.first<<" "<<p.second<<" "<<endl;

    pair <int,int>p2(30, 40);
    pair <int,int>p3(p2);


    cout<<p2.first<<" "<<p2.second<<" "<<endl;
    cout<<p3.first<<" "<<p3.second<<" "<<endl;

    pair < string , pair <int , char> > student;

    student = make_pair("Rakib Hasan",make_pair(101,'A'));

    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;


}
