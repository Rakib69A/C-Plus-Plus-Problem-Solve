#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,a=0,b=0;
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            a++;
        if(islower(s[i]))
            b++;
    }
    if(a>b)
    {
        for(i=0;i<s.size();i++)
            s[i]=toupper(s[i]);
    }
    else
    {
        for(i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
    }
    cout<<s<<endl;

    return 0;
}
