#include<iostream>
using namespace std;
int main()
{
    int N,i,A=0,D=0;
    cin>>N;
    char s[N];
    for( i=0;i<N;i++)
    {
        cin>>s[i];
        if(s[i]=='A')
            A++;
        else
            D++;
    }
    if(A>D)
        cout<<"Anton"<<endl;
    else if(A<D)
        cout<<"Danik"<<endl;
    else if(A==D)
        cout<<"Friendship"<<endl;
    return 0;
}
