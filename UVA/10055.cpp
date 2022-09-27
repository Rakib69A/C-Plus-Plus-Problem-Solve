#include<iostream>
using namespace std;
int main ()
{
    long long int x,a,b;
    while(cin>>a>>b)
    {
        if(a>b)
        {
             x=a-b;
        }
        else if(b>a)
        {
            x=b-a;
        }
        cout<<x<<endl;
    }
}

