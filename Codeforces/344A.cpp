#include<iostream>
using namespace std;
int main()
{
    int a,i,j,k=1;
    cin>>a;
    int s[a];
    for(i=0; i<a ; i++)
        cin>>s[i];
    for(i=0; i<a-1; i++)
    {
        if(s[i]!=s[i+1])
            k++;
    }
    cout<<k<<endl;
    return 0;
}
