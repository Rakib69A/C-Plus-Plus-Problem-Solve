#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int count=0;
    while(a>0)
    {
        if(a%2==1)
        {
            a--;
            count++;
        }
        else
            a/=2;
    }
    cout<<count<<endl;
    return 0;
}
