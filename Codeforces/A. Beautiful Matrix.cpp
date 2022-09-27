#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a[5][5];
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}
