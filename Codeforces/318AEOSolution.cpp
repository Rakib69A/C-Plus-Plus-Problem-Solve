#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,x;
    cin>>a>>b;
    if(a%2==0)
        c=a/2;
    else
        c=(a+1)/2;
    if(b<=c)
       x=(b*2)-1;
    else
        x=(b-c)*2;
    cout<<x<<endl;
    return 0;
}
