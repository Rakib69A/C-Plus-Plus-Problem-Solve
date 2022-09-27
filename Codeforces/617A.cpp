#include<iostream>
using namespace std;
int main()
{
    int n,a,x=0;
    cin>>n;
    if(n%5!=0)
        x++;
    n/=5;
    x+=n;
    cout<<x<<endl;
    return 0;
}
