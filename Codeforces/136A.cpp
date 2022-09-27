#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    int A[n],A1[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[j]==i)
            {
                A1[k]=j+1;
                A[j]=0;
                k++;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<A1[i]<<" ";
    return 0;
}
