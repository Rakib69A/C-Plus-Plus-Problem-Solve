#include<iostream>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    int x=0,len=0,j=0;
    len=s.size();
    for(int i=0;i<len;i++)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
            {
               s1[j]=towlower(s[i]);
               j++;
            }
        }
        for(int i=0;i<j;i++)
              cout<<"."<<s1[i];
        cout<<endl;
        return 0;
}
