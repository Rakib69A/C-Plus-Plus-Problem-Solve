#include<iostream>
using namespace std;
int main()
{
        int n,i,j,count=0;
        string s;
        cin>>n;
        for(i=0; i<n; i++)
            cin>>s[i];
        for(i=0; i<n; i++)
        {
            if(s[i]==s[i+1])
                count++;
        }
        cout<<count<<endl;
    return 0;
}
