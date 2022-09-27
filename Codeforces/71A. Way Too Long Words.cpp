#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
    cin>>s;
    if(s.size()>10)
    {
        int a = s.size()-2;
        cout<<s[0]<<a<<s[s.size()-1]<<endl;
    }
    else
        cout<<s<<endl;

    }

    return 0;
}
