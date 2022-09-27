#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>m)
            m=v[i];
    }
    int sum=0,x;
    for(int i=0;i<n;i++)
    {
        if(v[i]<m)
        {
            x = m-v[i];
            sum+=x;
        }
    }
    cout<<sum<<endl;
    return 0;
}
