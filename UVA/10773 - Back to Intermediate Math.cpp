#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int t,test = 0;
    double d,v,u;
    cin>>t;
    while(t--)
    {
        cin>>d>>v>>u;
        double t1 = d/u;
        double t2 = d/sqrt(u*u-v*v);
        if(v>u || t1 == t2)
        {
            cout<<"Case "<<test++<<": can't determind"<<endl;
            continue;
        }
        cout<<fixed;
        cout<<setprecision(3);
        cout<<"Case "<<test++<<": "<<(t2-t1)<<endl;
    }
    return 0;
}

