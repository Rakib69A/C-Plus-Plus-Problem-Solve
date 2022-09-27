#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[j]==i)
            {
                cout<<j+1<<" ";
                break;
            }
        }
    }
    return 0;
}
