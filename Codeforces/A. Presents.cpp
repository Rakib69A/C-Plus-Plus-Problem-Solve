#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int j=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[j]==i)
                {
                    cout<<j+1<<endl;
                    break;
                }

        }
    }
}
