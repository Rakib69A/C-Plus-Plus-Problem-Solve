#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,o=0;
    while(cin>>n)
    {
        o++;
        k=1;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<i;j++)
            {
                k++;
            }
        }
        if(n==0)
            printf("Caso %d: %d numero\n",o,k);
        else printf("Caso %d: %d numeros\n",o,k);
        printf("0 ");
        for(i=0;i<=n;i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl<<endl;
}
return 0;
}
