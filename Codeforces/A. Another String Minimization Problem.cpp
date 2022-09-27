#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char c[m];
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(c[a[i]]=='A')
                c[m+1-a[i]]='A';
            else
                c[a[i]]='A';
        }
        for(int i=1;i<=m;i++)
        {
            if(c[i]=='A')
                cout<<'A';
            else
                cout<<'B';
        }
        cout<<endl;
    }
}
