#include<bits/stdc++.h>
using namespace std;
const int N = 25e2+10;
vector<int>a(N);
int main()
{
    int n,count = 0,ans=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=a[i-1])
        {
            count++;
            ans = max(ans,count);
        }
    else
        count = 1;
    }
    cout<<ans<<endl;
    return 0;
}

