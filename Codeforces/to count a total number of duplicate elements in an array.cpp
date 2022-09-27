#include<iostream>
using namespace std;
int main(){
    int n,A[100],i,j;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i<n;i++){
        for( j=i;j<n;j++){
            if(A[i]==A[j+1]){
                cout<<"Duplicate element is : "<<A[i]<<" "<<endl;
                break;
            }
        }
    }
}

