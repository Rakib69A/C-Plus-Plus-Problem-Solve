#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,count=0;
    cin>>n>>k;
    sum=k;
    for(int i=1; i<=n; i++)
    {
            sum+=5*i;
        if(sum>240)
            break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
