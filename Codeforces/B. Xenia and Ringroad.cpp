#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int time = 0,initial = 1;
    while(m--)
    {
        int present;
        cin>>present;
        if(present>=initial)
            time+=present-initial;
        else
            time+=n-(initial-present);
        initial = present;
    }
    cout<<time<<endl;
    return 0;
}
