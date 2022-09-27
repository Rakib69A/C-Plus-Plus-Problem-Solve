#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(1)
    {
        int n,j=0;
        cin>>n;
        if(n==0)
            break;
        while(n--)
        {
            int a;
            cin>>a;
            if(a>0)
                j++;
            if(a==0)
                j--;


        }
        i++;
        cout<<"Case "<<i<<":"<<j<<endl;
    }
    return 0;
}
