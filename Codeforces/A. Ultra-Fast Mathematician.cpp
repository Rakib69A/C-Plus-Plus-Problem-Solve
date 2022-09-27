#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int k=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
            s1[k++]='0';
        else
            s1[k++]='1';
    }
    for(int i=0;i<s1.size();i++)
        cout<<s1[i];
    return 0;
}
