#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int A[a];
    int sum1=0,sum2=0,count=0;
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
        sum1+=A[i];
    }
    sum1/=2;
    sort(A,A+a);
    for(int j=a-1;j>=0;j--)
    {
        sum2+=A[j];
        count++;
        if(sum1<sum2)
            break;
    }
    cout<<count<<endl;
    return 0;
}
