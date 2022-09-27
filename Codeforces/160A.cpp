#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j=0,sum=0,x=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    sum/=2;
    sort(A,A+n);
    for(i=n-1;i>=0;i--)
    {
        j++;
        x+=A[i];
        if(x>sum)
            break;
    }
    cout<<j<<endl;
    return 0;
}
