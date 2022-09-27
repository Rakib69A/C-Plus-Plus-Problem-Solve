#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[4];
    while(n++)
    {
        int m = n;
        int x,y=0;
        while(m!=0)
        {
            x = m%10;
            a[y++] = x;
            m/=10;
        }
        if(a[0]==a[1] || a[0]==a[2] || a[0]==a[3] || a[1]==a[2] || a[1]==a[3] || a[2]==a[3])
            continue;
        else
        {
            cout<<n<<endl;
            break;
        }
    }

}
