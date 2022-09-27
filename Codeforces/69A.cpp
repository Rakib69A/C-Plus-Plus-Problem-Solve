#include<iostream>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n;
    while(n--)
    {
        for(int i=1;i<=3;i++)
        {
            cin>>x;
            sum+=x;
        }
    }
    if(sum==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
