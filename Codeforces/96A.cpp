#include<iostream>
using namespace std;
int main()
{
    string s;
    int a=0,b=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            a++;
        else
            b++;
    }
    if(a==7 || b==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
