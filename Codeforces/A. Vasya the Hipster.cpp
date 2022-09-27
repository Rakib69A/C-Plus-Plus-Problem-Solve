#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" ";
    int x = max(a,b)-min(a,b);
    cout<<x/2<<endl;
    return 0;
}
