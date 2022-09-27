#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    for(i=0;i<t;i++)
    {
        for(j=0;j<s.size();j++)
        {
            if(s[j]<s[j+1])
            {
              swap(s[j+1],s[j]);
              j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
