#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,c,d,flag=0,m;
        cin>>n;
        int A[4];
    while(1)
    {
        n++;
        m=n;
        a=m%10;
        m/=10;
        b=m%10;
        m/=10;
        c=m%10;
        m/=10;
        d=m%10;
         if(a!=b && b!=c && c!=d && a!=c && a!=d)
            break;
    }
    cout<<n<<endl;
    return 0;

}
