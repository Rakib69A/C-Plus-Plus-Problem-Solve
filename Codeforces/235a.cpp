#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size(),count=0;
    sort(s.begin(),s.end());
    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[i+1])
            count++;
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
