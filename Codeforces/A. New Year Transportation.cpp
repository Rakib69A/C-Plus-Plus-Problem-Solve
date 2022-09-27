#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int pos=1,next;
    while(pos<t)
    {
        next = pos+v[pos-1];
        pos = next;
    }
    if(pos==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
