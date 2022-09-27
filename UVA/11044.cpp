#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i,j,x,y,sum = 0,temp = 0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }

            }
        }
        for(i=0;i<n-1;i++)
        {
            x = a[i+1] - a[i];
            sum += x;
        }
        y = a[n-1] - a[0];
        sum += y;
        cout<<sum<<endl;
    }
    return 0;
}
