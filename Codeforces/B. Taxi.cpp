#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,count[5] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>a;
        count[a]++;
    }
    int total = count[4]+count[3]+count[2]/2;
    count[1]-=count[3];
    if(count[2]%2==1)
    {
        total += 1;
        count[1]-=2;
    }
    if(count[1]>0)
    {
        total += (count[1]+3)/4;
    }
    cout<<total<<endl;
    return 0;
}
