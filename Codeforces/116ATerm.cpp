#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    int A[n*2];
    int count[n]={0};
    for(int i=0;i<n*2;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n*2;i++)
    {
        cout<<A[i]<<endl;
    }
    for(int i=0;i<n/2;i++,k++)
    {
        count[i]=count[i-1]+A[k+3];
        count[i]=(A[k+1]-A[k+2])+A[k+3];
        k++;
    }
    for(int i=0;i<n;i++)
        cout<<count[i]<<" ";
    return 0;
}
