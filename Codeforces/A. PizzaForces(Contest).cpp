#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        int s,num,x=0;
        cin>>s;
        num=s;
        if(s%10==0)
        {
            s/=10;
            cout<<s*25<<endl;
            continue;
        }
        if(s%8==0)
        {
            s/=8;
            cout<<s*20<<endl;
            continue;
        }
        if(s%6==0)
        {
            s/=6;
            cout<<s*15<<endl;
            continue;
        }

        else if(s%10!=0 && s%8!=0 && s%6!=0){
            if(s>10){
            s/=10;
            x=s*25;
        }
        if(num%10>=8){
            x=x+20;
        }
        if(num%10>=6 || num%6<6)
            x=x+15;
        cout<<x<<endl;
    }
    }
    return 0;
}
