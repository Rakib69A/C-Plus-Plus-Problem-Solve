#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int i,j=0;
    string s;
    cin>>s;
    for(i=0;i<s.size(); i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]>s[j])
            {
                int temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    int k=s.size()-1;
     for(i=s.size()/2;i<s.size(); i++)
     {
         cout<<s[i];
         if(i==k)
            break;
         cout<<'+';
     }

    return 0;
}
