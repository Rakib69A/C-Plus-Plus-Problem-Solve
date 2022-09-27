#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,x=0,max=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        a=abs(x-a);
        x=a+b;
        if(x>=max)
            max=x;
    }
    cout<<max<<endl;
    return 0;
}
