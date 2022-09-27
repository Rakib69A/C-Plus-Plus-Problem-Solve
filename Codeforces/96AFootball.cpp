#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0,a=0,b=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            a++;
            b=0;
            if(a>=7)
            {
                flag=1;
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            b++;
            a=0;
            if(b>=7)
            {
                flag=1;
                cout<<"YES"<<endl;
                return 0;
            }
        }

    }
        cout<<"NO"<<endl;

}
