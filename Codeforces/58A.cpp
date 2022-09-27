#include<iostream>
using namespace std;
int main()
{
    int i,j=0,k=0;
    string s,s1="hello";
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s1[j]==s[i])
        {
            j++;
            k++;
        }
    }
    if(k==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
