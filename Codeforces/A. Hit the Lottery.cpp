#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = n/100;
    int rem = n%100;
    ans+=rem/20;
    rem %=20;
    ans+=rem/10;
    rem%=10;
    ans+=rem/5;
    rem%=5;
    ans+=rem/1;
    cout<<ans<<endl;
    return 0;
}
