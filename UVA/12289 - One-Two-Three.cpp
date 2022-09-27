#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    string str;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>str;
        if(str.length()==5)
            cout<<"3\n";
        else
        {
            int i=0;
            if(str[0]=='o')
                ++i;
            if(str[1]=='n')
                ++i;
                if(str[2]=='e')
                ++i;
                if(i>=2)
                    cout<<"1\n";
                else
                    cout<<"2\n";
        }
    }
    return 0;
}
