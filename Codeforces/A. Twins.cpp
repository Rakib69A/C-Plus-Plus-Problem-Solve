#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],sum=0,sum2=0,count=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        sum+=A[i];
    }
    sum/=2;
    sort(A,A+n);
    for(int i=n-1;i>=0;i--)
    {
        sum2+=A[i];
        count++;
        if(sum2>sum)
            break;
    }
    cout<<count<<endl;
    return 0;
}
