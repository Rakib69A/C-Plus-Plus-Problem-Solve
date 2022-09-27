#include<iostream>
using namespace std;
int main()
{
    int a,s=0,s1=0,s2=0;
    cin>>a;
    int A[100][100];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cin>>A[i][j];
        }
        s+=A[i][0];
        s1+=A[i][1];
        s2+=A[i][2];
    }
    if(s==0 && s2==0 && s2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
