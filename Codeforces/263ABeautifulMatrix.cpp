#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,sum=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>x;
            if(x==1)
                sum=abs(i-2)+abs(j-2);

        }
    }
    cout<<sum<<endl;
    return 0;
}

