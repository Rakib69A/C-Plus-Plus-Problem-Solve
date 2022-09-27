#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char s1[1000];
    int i,j,k=0,count=0;
    for(i=0;i<s.size();i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
                s[j]=0;
        }
    }
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            k++;
    }
   if(k%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
