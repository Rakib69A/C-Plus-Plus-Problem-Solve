#include<iostream>
using namespace std;
int main()
{
    int k,n,w,x=0;
    cin>>k>>n>>w;
    for(int i=1;i<=n;i++)
    {
        k*=i;
        x+=k;
    }
    cout<<n-k<<endl;
    return 0;
}
