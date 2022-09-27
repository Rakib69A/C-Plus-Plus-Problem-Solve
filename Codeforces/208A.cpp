#include<iostream>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    int i=0;
    while(i<s.size())
    {
        if(s[i]!='W'||s[i+1]!='U'||s[i+2]!='B')
        {
            cout<<s[i];
            i++;
        }
        else
        {
            i+=3;
            cout<<" ";
        }
    }
    return 0;
}
