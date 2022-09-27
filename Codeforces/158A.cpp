#include<iostream>
using namespace std;
int main()
{
    int n,x,count=0;
    cin>>n>>x;
    int A[n];
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]>=A[x-1] && A[i]>0)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
