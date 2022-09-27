#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,p,q,i,j,count=0,A[200];
    cin>>n>>p;
    for(i=0; i<p; i++)
        cin>>A[i];

    cin>>q;
    for(i=p; i<p+q; i++)
        cin>>A[i];

    sort(A,A+(p+q));
    for(i=0;i<p+q;i++)
    {
        if(A[i]!=A[i+1])
            count++;
    }

    if(count==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
