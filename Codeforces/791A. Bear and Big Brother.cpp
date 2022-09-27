#include<iostream>
using namespace std;
int main()
{
    int a,b,x=0,y=0,i;
    cin>>a>>b;
    for(i=1; ;i++)
    {
        x=x+a*3;
        a=x;
        y=y+b*2;
        b=y;
        if(x>y)
            break;
    }
    cout<<i;
    return 0;
}
