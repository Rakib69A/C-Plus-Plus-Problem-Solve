#include<iostream>
using namespace std;
int main ()
{
    int T;
    cin>>T;
    cout<<"Lumberjacks:"<<endl;
    while(T--)
    {
        int a[10],i,x;
        for(i=0;i<10;i++)
        {
            cin>>a[i];
        }
        int up,down;
        up = a[0];
        down = a[1];
         if(up>down)
        {
            x = 0;
            for(i=0;i<10;i++)
           {
            if(a[i]<a[i+1])
            {
                x++;
            }
           }
        }
        if(up<down)
        {
            x = 0;
            for(i=0;i<10;i++)
        {
            if(a[i]<a[i+1])
            {
                x++;
            }
        }
        }

        if(x==10)
        {
            cout<<"Ordered"<<endl;
        }

        else{
            cout<<"Unordered"<<endl;
        }
    }
    return 0;
}
