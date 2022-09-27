#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i=1;
        cin>>k;
        for(i=1;; i++)
        {
            if(i%3==0 || i%10==3)
                continue;
            if(--k==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
