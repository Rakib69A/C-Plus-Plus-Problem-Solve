#include<iostream>
using namespace std;
int main()
{
    int scount(0),bcount(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            scount++;
        else
            bcount++;

    }
    if(scount>=bcount)
    {
        for(int i=0;i<=s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}
