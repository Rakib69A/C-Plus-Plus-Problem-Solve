#include<iostream>
using namespace std;
int main ()
{
    int test_case,Num,i = 1;
    cin>>test_case;
    while(test_case--)
    {
        int Num,temp;
        cin>>Num;
        temp = Num;

        int x[temp], m = 0;
        for(int a = 0; a < temp ; a++)
        {
            cin>>x[a];

            if(x[a]>=m)
            {
                m = x[a];
            }

        }

            cout<<"Case "<<i<<": "<<m<<endl;
            i++;
    }
    return 0;
}
