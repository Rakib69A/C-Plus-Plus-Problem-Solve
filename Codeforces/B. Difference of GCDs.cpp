#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int j=1;
        for(int i=a;i<b;i++)
        {
            cout<<"gcd = "<<__gcd(j++,i)<<endl;
        }
    }
    return 0;
}
