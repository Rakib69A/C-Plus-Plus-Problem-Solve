#include<iostream>
using namespace std;
int main()
{
    int Year,N,a,b,c,d;
    cin>>Year;
    Year++;
    N=Year;

    while(1)
    {
        a=Year/1000;
        d=Year%10;
        Year/=10;
        c=Year%10;
        Year/=10;
        b=Year%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
        else
            N++;
        Year=N;
    }
    cout<<N<<endl;
    return 0;
}
