#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],ma=0,mi=101,maxpos=1,minpos=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>ma)
        {
            ma = a[i];
            maxpos = i;
        }
        if(a[i]<=mi)
        {
            mi = a[i];
            minpos = i;
        }

    }
    if(maxpos>minpos)
        minpos++;
    cout<<maxpos+(n-1)-minpos<<endl;
    return 0;
}
