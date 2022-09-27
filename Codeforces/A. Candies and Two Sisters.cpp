#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1 || n==2)
            cout<<0<<endl;
        else
            cout<<(n-1)/2<<endl;

    }
    return 0;
}
