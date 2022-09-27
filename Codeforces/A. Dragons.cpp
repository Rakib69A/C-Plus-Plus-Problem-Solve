#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,flag=1;
    cin>>s>>n;
    pair<int,int>a[1000];
    for(int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    sort(a,a+n);
//    for(int i=0;i<n;i++)
//        cout<<a[i].first<<" "<<a[i].second<<endl;
    for(int i=0;i<n;i++)
    {
        if(s>a[i].first)
        {
            flag=1;
            s+=a[i].second;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
