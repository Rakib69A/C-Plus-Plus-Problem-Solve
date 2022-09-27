#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(b>a)
        {
            if((b-a)%10==0)
              cout<<(b-a)/10<<endl;
            else
                cout<<(b-a)/10+1<<endl;
        }
        else
        {
            if((a-b)%10==0)
              cout<<(a-b)/10<<endl;
            else
                cout<<(a-b)/10+1<<endl;
        }

    }
    return 0;
}
