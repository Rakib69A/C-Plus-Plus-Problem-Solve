#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q,m;
    cin>>q;
    sort(arr,arr+n);
    while(q--)
    {
        cin>>m;
        int ans = upper_bound(arr,arr+n,m)-arr;
        cout<<ans<<endl;
    }
    return 0;
}
