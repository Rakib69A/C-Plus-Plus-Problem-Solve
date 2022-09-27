#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int A[n*2],flag = 1,j=0;
        for(int i=0;i<n*2;i++)
            cin>>A[i];
        int B[n],C[n];
        for(int i=0;i<n;i++)
        {
            B[i]=A[i];
            cout<<B[i]<<" ";
        }
        cout<<endl;
        for(int i=n;i<n*2;i++)
        {
            C[j]=A[i];
            cout<<C[j]<<" ";
            j++;
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<C[i]-B[i]<<" ";
            if(C[i]-B[i]>=x)
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        cout<<endl;
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
