#include<iostream>
using namespace std;

int main()
{
    int t,w;
    cin>>t;
    while (t--)
    {
        cin>>w;
        int y1,y2,y[w],flag=1;
        for (int i=0;i<w;i++)
        {
            cin>>y1>>y2;
            y[i]=y1-y2;
            if (y[0]!=y[i]) flag=0;
        }
        if (flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        if (t) cout<<endl;
    }
    return 0;
}
