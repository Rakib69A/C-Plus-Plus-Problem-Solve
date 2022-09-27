#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    char s1[100];
    int  i,j=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            s[i]=0;
        else
            s1[j++]=towlower(s[i]);

    }
    for(i=0; i<j; i++)
        cout<<"."<<s1[i];
    return 0;
}
