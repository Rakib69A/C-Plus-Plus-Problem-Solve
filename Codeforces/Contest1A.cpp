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
        {
            cin>>A[i];
            if(A[i-1]<A[i])
            {
                  count++;
                 swap(A[i-1],A[i]);
            }
                else if(A[i-1]==A[i])
                      flag=1;
        }
 if((count>0&&count<=(n*(n-1))/2-1)||flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
