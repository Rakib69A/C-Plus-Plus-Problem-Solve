#include<iostream>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int x =  (m/3);

        int y = (n/3);

        int z = x*y;
        cout<<z<<endl;
    }
    return 0;
}
