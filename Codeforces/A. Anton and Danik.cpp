#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    char A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]=='A')
            a++;
        else
            b++;
    }
    if(a>b)
    cout<<"Anton"<<endl;
    else if(a==b)
        cout<<"Friendship"<<endl;
    else
        cout<<"Danik"<<endl;
    return 0;
}
