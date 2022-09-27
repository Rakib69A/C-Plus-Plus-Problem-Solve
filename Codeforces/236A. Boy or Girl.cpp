#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int len;
    cin>>s;
    len = s.size();
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                s[i]=0;
                len--;
            }
        }
    }
    if(len%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
