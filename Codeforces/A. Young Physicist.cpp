#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,sum=0;
    cin>>x;
    for(int i=1;i<=x;i++){
        cin>>a>>b>>c;
        sum=sum+a+b+c;
    }
    if(sum==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
