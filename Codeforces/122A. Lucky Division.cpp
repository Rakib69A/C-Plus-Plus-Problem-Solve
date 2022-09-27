#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n,len=0;
    cin>>n;
    stringstream ss;
    ss<<n;
    string s;
    ss>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            len++;
        }
    }
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || len == s.size())
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
                return 0;

    }
