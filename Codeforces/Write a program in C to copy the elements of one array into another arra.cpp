#include<iostream>
using namespace std;
int main()
{
    int n,arr1[100],arr2[100],j=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        arr2[j++]=arr1[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

}
