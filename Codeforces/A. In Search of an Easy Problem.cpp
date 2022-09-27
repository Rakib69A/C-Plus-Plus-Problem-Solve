#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int flag = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}
