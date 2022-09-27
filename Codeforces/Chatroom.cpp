#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2 = "hello";
    int x=0,y=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s2[x])
        {
            x++;
            y++;
        }
    }
    if(y==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
