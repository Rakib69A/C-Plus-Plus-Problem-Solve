#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,n;
    cin>>t>>n;
    int sum = 0;
    while(t--)
    {
        cin>>a;
        float x = (float)a/n;
        sum+=ceil(x);
    }
    cout<<sum<<endl;
    return 0;
}
