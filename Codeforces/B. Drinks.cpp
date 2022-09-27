#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    double x,sum=0.0;
    cin>>n;
    m = n;
    while(n--)
    {
        cin>>x;
        sum+=x;
    }
    cout<<fixed<<setprecision(12)<<sum/m<<endl;
    return 0;
}
