#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=1;i<s.size();i++)
    {
        /*if(s[i]>='a'&&s[i]<='z')
            flag=1*/
        if(islower(s[i]))
            flag=1;
    }
    if(islower(s[0])&&flag==0)
    {
        s[0]=towupper(s[0]);
        for(int i=1;i<s.size();i++)
            s[i]=towlower(s[i]);
        cout<<s<<endl;
    }
    else if(isupper(s[0])&&flag==0)
    {
        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
        cout<<s<<endl;
    }
    else
        cout<<s<<endl;
    return 0;
}
