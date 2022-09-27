#include<iostream>
using namespace std;
int main()
{
    int N,H,a,sum=0;
    cin>>N>>H;
    for(int i=1;i<=N;i++)
    {
        cin>>a;
        if(a>H)
            sum+=2;
        else
            sum+=1;

    }
    cout<<sum<<endl;
    return 0;
}
