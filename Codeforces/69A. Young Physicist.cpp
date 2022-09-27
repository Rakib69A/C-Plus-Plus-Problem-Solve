#include<iostream>
using namespace std;
int main()
{
    int n,x[100][100],y=0,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>x[i][j];
            if(x[i][j]==0)
                count++;
            y+=x[i][j];
        }
    }
    if(count/3==n)
        cout<<"YES"<<endl;
    else if(x[0][0]==0)
        cout<<"NO"<<endl;

    else
    {
        if(y==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
