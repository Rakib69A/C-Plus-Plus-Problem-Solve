#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i=1,count=0;
    while(1)
    {
        if(n-i==0)
            break;
        if(m-i==0)
            break;
        i++;
        count++;
    }
    if(count%2==1)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
    return 0;
}
