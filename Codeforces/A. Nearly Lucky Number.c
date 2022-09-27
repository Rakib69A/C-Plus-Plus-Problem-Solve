#include<iostream>
using namespace std;
int main()
{

    long long int n;
    cin>>n;
    int flag = 0;
    while(n)
    {
        if(n%10==4 || n%10 == 7)
        {
            n/=10;
            continue;
        }
        else
        {
            flag = 1;
            break;
        }

    }
    if(flag == 1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
