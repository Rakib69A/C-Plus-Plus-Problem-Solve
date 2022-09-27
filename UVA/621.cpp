#include<iostream>
#include<string.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[100];
        int i;
        cin>>str;
        i=strlen(str);
        if(strcmp(str,"1" )==0 || strcmp(str,"4" )==0 || strcmp(str,"78" )==0 )
            cout<<"+\n";
        else if(strcmp(str,"9")==0 )
            cout<<"*\n";
        else if(str[i-1]=='5' && str[i-2]=='3')
            cout<<"-\n";
        else if(str[0]=='9' && str[i-1]=='4')
            cout<<"*\n";
        else
            cout<<"?\n";
    }
    return 0;
}
