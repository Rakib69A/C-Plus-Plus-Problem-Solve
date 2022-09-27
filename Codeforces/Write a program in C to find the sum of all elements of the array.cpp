#include<iostream>
using namespace std;
int main(){
    int i,n,arr[100],sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
