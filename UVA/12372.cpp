#include<iostream>
using namespace std;
int main ()
{
    int T,i=0;;
    cin>>T;
    while(T--)
    {
        int L,W,H;
        cin>>L>>W>>H;

        if(L<=20 && W<=20 && H<=20)
        {
            i++;
            cout<<"Case "<<i<<": "<<"good"<<endl;
        }
        else
        {
            i++;
            cout<<"Case "<<i<<": "<<"bad"<<endl;
        }
    }
}
