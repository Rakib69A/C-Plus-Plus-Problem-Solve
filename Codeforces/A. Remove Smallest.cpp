#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    read:
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<n;i++)
            cin>>arr[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]-arr[i-1]>1){
                cout<<"NO"<<endl;
                goto read;
            }
        }
        cout<<"YES"<<endl;
    }
}
