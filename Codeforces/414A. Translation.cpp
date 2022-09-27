#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,str;
    cin>>s>>str;
    int i=0,j=0,l=0,count=0;
    l=s.length()-1;
    for( i=l;i>=0;i--,j++)
    {
       if(str[j]==s[i])
       {
           count++;
       }
    }
    if(count==l+1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
