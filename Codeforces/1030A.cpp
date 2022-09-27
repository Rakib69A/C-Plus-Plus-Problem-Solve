#include<iostream>
using namespace std;
int main()
{
    int n,a,flag=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
