#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H' ||s[i]=='Q' ||s[i]=='9' ||s[i]=='+')
           flag=1;
        else
            flag=0;
    }
    if(flag==1)
         cout<<"YES"<<endl;
    else
         cout<<"NO"<<endl;
    return 0;
}
