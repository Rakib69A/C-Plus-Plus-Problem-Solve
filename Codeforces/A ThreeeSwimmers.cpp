#include<iostream>
using namespace std;
int main()
{
    int t,p,a,b,c,x=0;
    cin>>t;
    while(t--){
        cin>>p>>a>>b>>c;
        for(int i=0;i<=5;i++)
        {
            if(i*a-p>=0)
            {
                x = i*a-p;
                break;
            }
            else if(i*b-p>=0)
            {
                x = i*b-p;
                break;
            }
            if(i*c-p>=0)
            {
                x = i*c-p;
                break;
            }
        }
        cout<<x<<endl;
    }
}

