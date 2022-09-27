#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    if(n==1 || n==2 || n==3 || n==4){
        cout<<1<<endl;
        return 0;
    }
        if(n%5==0){
            cout<<n/5<<endl;
            return 0;
        }
        else{
            n=n/5;
            cout<<n+1<<endl;
        }
}
