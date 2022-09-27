#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if((a-b)>50 || (b-a)>50)
        {
            if(a>50)
                c=100-a+b;
            else
                c=100-b+a;
        }
        else if(a>b)
            c=a-b;
        else
            c=b-a;
        if(a==-1 && b==-1)break;
        cout<<c<<endl;
    }
    return 0;
}
