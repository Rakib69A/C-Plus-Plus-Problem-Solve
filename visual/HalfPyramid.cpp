#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=row;j++)
        {
            if(j<i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

