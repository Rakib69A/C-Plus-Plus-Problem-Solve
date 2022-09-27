#include<iostream>
#include<utility>

///#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair < int , char > p;

    p.first = 10;   ///direct assign
    p.second = 'A';

    cout<<p.first<<" "<<p.second<<" "<<endl;

    p = make_pair(20,'B');  ///pair's function

    cout<<p.first<<" "<<p.second<<" "<<endl;

    pair < int , int > p2(30,40);  ///Initializing a pair

    cout<<p2.first<<" "<<p2.second<<" "<<endl;

    pair<int,int>p3(p); ///copy of pair(same data type

    cout<<p3.first<<" "<<p3.second<<" "<<endl;

    pair<string,pair<int,char> >student;

    student = make_pair("Rakib_Hasan",make_pair(190141,'A'));  ///multiple pair

    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;


    return 0;
}
