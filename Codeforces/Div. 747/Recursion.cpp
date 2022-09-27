#include<iostream>
using namespace std;
int sum(int a,int n){
    if(n<=0){
        return sum(a,n-1)+a[n];
    }
}
int main(){
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sum(a,n);
}
