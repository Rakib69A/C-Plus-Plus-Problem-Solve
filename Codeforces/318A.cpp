#include<iostream>
using namespace std;
int main()
{
    int n,a,k=0,i,j=1,x;
    cin>>n>>a;
    int A[n];
    if(n%2==0)
        k=n/2+1;
    else
        k=n/2+2;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            A[j]=i;
            j++;
        }
        if(i%2==0)
        {
            A[k]=i;
            k++;
        }
    }
    cout<<A[a]<<endl;
    return 0;
}
