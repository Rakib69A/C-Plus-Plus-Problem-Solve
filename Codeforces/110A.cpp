#include<iostream>
using namespace std;
int main()
{
    int n,x,i=0;
    cin>>n;
    while(n>0)
    {
        x=n%10;
        if(x==4 || x==7)
          i++;
        n/=10;
    }
    if(i==4 || i==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
