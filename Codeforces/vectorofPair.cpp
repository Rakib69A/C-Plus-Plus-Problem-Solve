#include<bits/stdc++.h>
using namespace std;
int decreaseArray(int a[],int n)
{
    int count=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==a[i-1])
        {
            count++;
            decreaseArray(a,n-1);
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        int x = decreaseArray(a,n);
        cout<<x<<endl;
    }
    return 0;
}
