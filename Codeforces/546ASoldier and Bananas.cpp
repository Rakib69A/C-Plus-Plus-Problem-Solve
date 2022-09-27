#include<iostream>
using namespace std;
int main()
{
    int k,n,w,a,x=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        a=k*i;
        x+=a;
    }
    if(x>n)
    cout<<x-n<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}

