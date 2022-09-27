#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            {
                a++;
                b=0;
                if(a==7)
                {
                    cout<<"YES";
                     break;
                }
            }
        else
            {
                b++;
                a=0;
                if(b==7)
                {
                    cout<<"YES";
                     break;
                }

            }
    }
   /// cout<<a<<endl;
    ///cout<<b<<endl;
    if(a!=7 && b!=7)
        cout<<"NO";

    return 0;
}
