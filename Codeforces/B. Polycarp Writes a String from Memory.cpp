#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int count =0,count2 =0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                if(count==3)
                {
                    count2++;
                    continue;
                }
            }
        }
        cout<<ceil(count2/3)<<endl;
    }
    return 0;
}
