#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,a,x;
    double sum=0;
    cin>>n;
    a=n;
    while(n--)
    {
        cin>>x;
        sum+=x;
    }
    cout<<fixed<<setprecision(12)<<sum/a<<endl;
    return 0;
}

