#include<stdio.h>
int main()
{
    long long int m,n,k,count = 0;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        count = 0;
         m = n;
    while(n>=k)
    {
        n=n-k;
        count++;
        n++;
    }
    printf("%lld\n",m+count);
    }
    return 0;


}
