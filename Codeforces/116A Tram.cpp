#include<iostream>
using namespace std;
int main()
{
    int a[1000],b[1000],n,x,sum,max=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i]>>b[i];
    x=b[0]-a[1];
    for(int i=1; i<n; i++)
    {
        sum=x+b[i];
        x=sum-a[i+1];
        if(sum>=max)
            max=sum;
    }
    if(b[0]!=0 && max==0)
        cout<<b[0]<<endl;
        else if(b[0]>=max)
            cout<<b[0]<<endl;
    else
        cout<<max<<endl;
    return 0;
}
