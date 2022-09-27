#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,count=0,x=0;
    cin>>n;
    x=n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(i=0; i<n; i++)
    {
        for(j=n-1; j>0; j--)
        {
            if(a[j]==4)
            {
                count++;
                a[j]=0;
                x--;
            }
            else if(a[i]+a[j]==4)
            {
                count++;
                a[i]=a[j]=0;
                x--;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
