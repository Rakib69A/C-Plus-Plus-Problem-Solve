#include<iostream>

using namespace std;

int main()
{
      int n,sum=0,c1=0,c2=0,c3=0,c4=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
                c1++;
            if(a[i]==2)
                c2++;
            if(a[i]==3)
                c3++;
            if(a[i]==4)
                c4++;
        }
        sum=sum+c4;
        c4=0;

        sum+=(c2/2);
        c2=c2%2;

        if(c1>=c3)
        {
            sum+=c3;
            c1-=c3;
            c3=0;
            sum+=(c1/4);
            c1%=4;
            if(c1+c2*2<=4 && c1+c2*2>0)
            {
                sum++;
                c1=0;
                c2=0;
            }
            else if(c1==3 && c2==1)
            {
                sum+=2;
                c1=0;
                c2=0;
            }
        }
        else if(c1<c3)
        {
            sum+=c1;
            c3-=c1;
            c1=0;
            sum+=c3+c2;
        }
        cout<<sum;
    return 0;
}
