#include<iostream>
using namespace std;
int main()
{
    int n,c1=0,c2=0,c3=0,c4=0,i,m_t=0;
    cin>>n;
    int A[n];
    for(i=0; i<n; i++)
    {
        cin>>A[i];
        if(A[i]==1)
            c1++;
        if(A[i]==2)
            c2++;
        if(A[i]==3)
            c3++;
        if(A[i]==4)
            c4++;
    }
    m_t+=c4;
    while(c1!=0 && c3!=0)
    {
        c1--;
        c3--;
        m_t++;
    }
    if(c1==0 && c3!=0)
    {
        m_t+=c3;
        c3=0;
    }
    m_t+=c2/2;
    if(c2%2!=0)
    {
        if(c1<=2)
        {
            m_t++;
            c2=0;
            c1=0;
        }
        else
        {
            c1-=2;
            m_t++;
            c2=0;
        }
    }
    if(c1!=0)
    {
        m_t+=c1/4;
        if(c1%4!=0)
            m_t++;
    }

    cout<<m_t<<endl;
    return 0;
}
