#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int T,n,sum = 0;
    char s1[100];
    cin>>T;
    while(T--)
    {
        cin>>s1;

        if(strcmp(s1,"donate") == 0)
        {
            cin>>n;
            sum += n;
        }


        else if(strcmp(s1,"report") == 0)
        {

             cout<<sum<<endl;

        }

    }
    return 0;
}
