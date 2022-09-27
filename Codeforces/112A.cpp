#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int flag=0;
    string s1,s2,a,b;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        s1[i]=towlower(s1[i]);
        s2[i]=towlower(s2[i]);
    }
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>s2[i])
        {
            flag=1;
            break;
        }
        else if(s1[i]<s2[i])
        {
            flag=-1;
            break;
        }
    }
            cout<<flag<<endl;
            return 0;
}
