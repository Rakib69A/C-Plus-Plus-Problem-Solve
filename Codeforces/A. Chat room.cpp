#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2="hello";
    cin>>s1;
    int count=0;
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s2.size();j++)
        {
            if(s2[i]==s1[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    if(count==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
