#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if((n/2)%2==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int j=2;
            for(int i=0;i<n/2;i++)
            {
                cout<<j<<" ";
                j+=2;
            }
            int val = j-2;
            j=1;
            for(int i=1;i<n/2;i++)
            {
                cout<<j<<" ";
                j+=2;
            }
            cout<<val+(n/2-1)<<endl;
        }
    }
}
