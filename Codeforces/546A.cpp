#include<iostream>
using namespace std;
int main()
{
    int k,n,w,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        int x=k*i;
        sum+=x;
    }
    int b=sum-n;
    cout<<b<<endl;
    return 0;
}
