#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1;
    int i,j=0,x=0;
    for(i=s.size()-1;i>=0;i--,j++)
    {
        if(s1[j]==s[i])
            x++;
    }
    if(s.size()==x)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
}
