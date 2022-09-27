#include<iostream>
using namespace std;
int main()
{
    int n,a,b,x=0,count=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        x=b-a;
        if(x>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
