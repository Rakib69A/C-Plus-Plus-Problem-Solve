#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='+'||s[2]=='+')
            a++;
        else
            a--;
    }
    cout<<a<<endl;
    return 0;
}
