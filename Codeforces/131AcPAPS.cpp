#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        s[i]=towlower(s[i]);
    s[0]=towupper(s[0]);
    cout<<s<<endl;
    return 0;
}
