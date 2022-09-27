#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,a=0,m;
    cin>>n>>x;
    int A[x];
    for(i=0;i<x;i++)
        cin>>A[i];
    sort(A,A+x);
    m=A[x-1]-A[0];
    for(i=n;i<=x;i++)
    {
        a=A[i-1]-A[i-n];
        a=abs(a);
        m=min(m,a);
    }
    cout<<m<<endl;
    return 0;
}
