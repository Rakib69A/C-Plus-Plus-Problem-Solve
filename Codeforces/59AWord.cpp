#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,upper_case=0,lower_case=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            upper_case++;
        else
            lower_case++;
    }
    if(upper_case>lower_case)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]-=32;
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=32;
        }
    }
    cout<<s<<endl;
    return 0;
}
