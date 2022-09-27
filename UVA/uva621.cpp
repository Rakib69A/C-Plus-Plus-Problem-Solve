#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char number[100000];
        cin>>number;
        if(strcmp(number,"1")==0 ||strcmp(number,"4")==0 || strcmp(number,"78")==0)
        {
            cout<<"+"<<endl;
            continue;
        }
        if(strcmp(number,"9")==0)
        {
            cout<<"*"<<endl;
            continue;
        }
        int len;
        len=strlen(number);
        if((number[len-1]=='5')&&(number[len-2]=='3'))
        {
            cout<<"-"<<endl;
            continue;
        }
        if((number[0]=='9')&&(number[len-1]=='4'))
        {
            cout<<"*"<<endl;
            continue;
        }


        //default
                cout<<"?"<<endl;
    }
    return 0;
}
