#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,a,b,x,s=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>x;
            if(x==1)
            {
                a=i;
                b=j;
            }
        }
    }
    cout<<abs(a-3)+abs(b-3)<<endl;
    return 0;
}
