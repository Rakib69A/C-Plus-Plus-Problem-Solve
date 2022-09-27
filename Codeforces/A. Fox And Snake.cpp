#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            if(i%2==0)
            {
                if(i%4==0)
                {
                    if(j==1)
                        cout<<"#";
                    else
                        cout<<".";
                }
                else if(j==b)
                    cout<<"#";
                else
                    cout<<".";
            }
            else
                cout<<"#";
        }
        cout<<endl;
    }
}
