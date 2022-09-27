#include<iostream>
using namespace std;
int main()
{
    while(1)
    {

        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=i; j<s.size(); j++)
            {
                if(s[i]==s[j+1])
                    count++;
            }
        }
        int x=s.size()-count;
        if(x%2==0)
            cout<<"CHAT WITH HER"<<endl;
        else
            cout<<"IGNORE HIM"<<endl;
    }
    return 0;
}
