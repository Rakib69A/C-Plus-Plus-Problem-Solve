#include<iostream>
using namespace std;
int main()
{

    long long int a,b,n,count = 1,max = 0;

    while(cin>>a>>b){
    cout<<a<<" "<<b<<" ";
    if(a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while(a<=b)
    {

        n = a;
        while(n!=1)
    {
        if(n%2==0)
            n/=2;
        else
            n=3*n+1;
        count++;
        if(n==1)
            break;
    }
    if(count > max)
         max = count ;
        a++;
         count = 1;
    }
    cout<<max<<endl;
    }
    return 0;
}

