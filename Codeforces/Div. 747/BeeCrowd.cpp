#include<iostream>
using namespace std;
int main()
{
    int i,j,i1,j1,x,y,count=0;
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]==42){
                cout<<i<<" "<<j;
            }
            else
                continue;
            cout<<endl;
        }
    }
    if(count==7)
        cout<<x<<y<<endl;

}
