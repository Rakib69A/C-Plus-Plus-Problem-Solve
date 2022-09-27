#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0,count[10]={1},max=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=0;i<n-1;i++)
    {
        if(A[i]<=A[i+1])
            count[j]++;
        else
            j++;
    }
    for(i=0;i<n;i++)
    {
        if(count[i]>max)
            max=count[i];
    }
    cout<<max<<endl;
    return 0;
}
