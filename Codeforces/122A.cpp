#include<iostream>
using namespace std;
int main()
{
    int N,flag=0;
    cin>>N;
    if(N%4==0 || N%7==0 || N%47==0 || N%74==0 || N%444==0 || N%447==0 || N%474==0 || N%744==0 || N%477==0 || N%747==0 || N%777==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
