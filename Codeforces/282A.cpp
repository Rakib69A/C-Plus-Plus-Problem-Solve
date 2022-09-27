#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,X=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if((s[1]=='+')||(s[0]=='+'))
           X++;
        else if((s[1]=='-')||(s[0]=='-'))
            X--;
    }
        cout<<X<<endl;
    return 0;
}
