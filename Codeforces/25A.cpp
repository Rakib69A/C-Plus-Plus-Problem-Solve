#include<iostream>
using namespace std;
int main()
{
    int a,n,even=0,odd=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even>odd)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]%2!=0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]%2==0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
