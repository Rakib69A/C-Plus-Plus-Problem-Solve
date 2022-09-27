#include<bits/stdc++.h>
using namespace std;
#define long long LL
int main()
{
    long long int n,k,i,j=1,l;
    cin>>n>>k;
    int A[n];
    if(n%2==0)
        l=n/2;
    else
        l=n/2+1;

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            A[j++]=i;
        else if(i%2==0)
            A[++l]=i;
    }
    cout<<A[k]<<endl;
}
