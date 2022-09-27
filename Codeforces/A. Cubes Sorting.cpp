#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int count=0,flag=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[j]<A[j+1])
                {
                    count++;
                    swap(A[j],A[j+1]);
                }
                else if(A[j]==A[j+1])
                      flag=1;
            }
        }
        if((count>0&&count<=(n*(n-1))/2-1)||flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
