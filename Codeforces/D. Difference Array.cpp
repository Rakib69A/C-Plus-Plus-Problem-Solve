#include<bits/stdc++.h>
using namespace std;
int operation(int m)
{
    int a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];
    while(m>1)
    {
        for(int i=0; i<m-1; i++)
            a[i]=a[i+1]-a[i];
        m--;
        sort(a,a+m);
    }
    return a[0];
}
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m;
        int x = operation(m);
        cout<<x<<endl;
    }
}
