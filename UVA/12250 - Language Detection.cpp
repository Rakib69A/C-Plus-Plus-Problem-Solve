#include<iostream>
using namespace std;
int main()
{
    int i=0;
    string S;
    while(cin>>S)
    {
        int j,flag=0;
        if(S=="#")
            break;
            /*for(j=0;j<14;j++)
            {
                if(S[j]>='a' && S[j]<='z')
                    flag=1;
            }
            if(flag==1)
                break;*/
        if(S=="HELLO")
        {
            i++;
            cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
        }
        if(S=="HOLA")
        {
            i++;
            cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
        }
        if(S=="HALLO")
        {
            i++;
            cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
        }
        if(S=="BONJOUR")
        {
            i++;
            cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
        }
        if(S=="CIAO")
        {
            i++;
            cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
        }
        if(S=="ZDRAVSTVUJTE")
        {
            i++;
            cout<<"Case "<<i<<": "<<"RUSSIA"<<endl;
        }
        if(S!="HELLO" && S!="HOLA" && S!="HALLO" && S!="BONJOUR" && S!="CIAO" && S!="ZDRAVSTVUJTE" )
        {
            i++;
            cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
        }
    }
    return 0;
}
