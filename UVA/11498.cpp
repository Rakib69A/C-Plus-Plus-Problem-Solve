#include<iostream>
using namespace std;
int main()
{
    int k,px,py,x,y;
    cin>>k;
    while(k!=0)
    {

        cin>>px>>py;
        for(int i=0;i<k;i++)
        {
            cin>>x>>y;
            if(x==px || y==py)
                cout<<"divisa"<<endl;
            else
            {
                if(x>px && y>py)
                    cout<<"NE";
                if(x<px && y>py)
                    cout<<"NO";
                if(x<px && y<py)
                    cout<<"SO";
                if(x>px && y<py)
                    cout<<"SE";
                    cout<<endl;

            }
        }
         cin>>k;
    }
    return 0;
}
