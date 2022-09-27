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
            if(a-p>=0)
            {
                x = a-p;
                break;
            }
            else if(b-p>=0)
            {
                x = b-p;
                break;
            }
            if(c-p>=0)
            {
                x = c-p;
                break;
            }
        }
        cout<<x<<endl;
    }
}
