#include<iostream>
using namespace std;
int main()
{
    int a,b,c,A[4],max=0;
    cin>>a>>b>>c;
    A[0]=(a+b)*c;
    A[1]=a*(b+c);
    A[2]=a*b*c;
    A[3]=(a*b)*c;
    A[4]=a+b+c;
    for(int i=0;i<5;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    cout<<max<<endl;
    return 0;
}
