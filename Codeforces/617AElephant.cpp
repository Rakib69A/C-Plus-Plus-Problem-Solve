#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=n/5;
    if(x==0 || x==1)
        cout<<"1"<<endl;
    else
    {
        x=n/5;
        if(n%5==0)
            cout<<x<<endl;
        else
            cout<<x+1<<endl;
    }

    return 0;
}
