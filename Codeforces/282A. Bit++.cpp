#include<iostream>
#include<cstring>
using namespace std;
int maim()
{
    int n,count=0;
    char s[2];
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[1]=='+')
            count++;
        else
            count--;

    }
    cout<<count<<endl;
    return 0;
}
