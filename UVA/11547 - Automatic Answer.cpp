#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int x;
        x=(n*63+7492)*5-498;
        if(x<0)
            x*=-1;
            x=(x/10)%10;
        cout<<x<<endl;
    }
    return 0;
}

