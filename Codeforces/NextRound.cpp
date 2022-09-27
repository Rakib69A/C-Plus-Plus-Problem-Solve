#include<iostream>
using namespace std;
int main ()
{
    int n,position,count=0;
    cin>>n>>position;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
    {
        if(A[i]>=A[position-1] && A[i]>0)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
