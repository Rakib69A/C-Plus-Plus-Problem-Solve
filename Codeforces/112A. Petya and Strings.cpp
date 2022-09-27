#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,a=0,b=0,flag=0;
    for(i=0; i<s1.size(); i++)
    {
        s1[i]=towlower(s1[i]);
        s2[i]=towlower(s2[i]);
        if(s1[i]>s2[i])
        {
            cout<<"1"<<endl;
            break;
        }
        else if(s1[i]<s2[i])
        {
            cout<<"-1"<<endl;
            break;
        }
    }
    if(i==s1.size())
        cout<<"0"<<endl;
    return 0;
}
