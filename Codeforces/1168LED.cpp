#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int b=0;
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')b+=6;
            if(s[i]=='1')b+=2;
            if(s[i]=='2')b+=5;
            if(s[i]=='3')b+=5;
            if(s[i]=='4')b+=4;
            if(s[i]=='5')b+=5;
            if(s[i]=='6')b+=6;
            if(s[i]=='7')b+=3;
            if(s[i]=='8')b+=7;
            if(s[i]=='9')b+=6;
        }
        cout<<b<<" leds"<<endl;
    }

}
