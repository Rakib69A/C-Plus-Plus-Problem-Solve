#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,j=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a==1 && b==1)||(a==1 && c==1)||(c==1 && b==1))
            j++;
    }
    cout<<j;
    return 0;
}
