
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,count=0;
    string s;
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
