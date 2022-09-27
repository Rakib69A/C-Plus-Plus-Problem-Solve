#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n;
    int flag = 1;
    if(n%4==0 || n%7==0 || n%47==0 || n%744==0)
       {
           cout<<"YES"<<endl;
           return 0;
       }
    while(n!=0)
    {
        int x = n%10;
        n/=10;
        if(x==4 || x == 7)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
