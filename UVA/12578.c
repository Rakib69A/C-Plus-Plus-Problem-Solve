#include<stdio.h>
#define Pi 3.14159265359
int main ()
{
    int T;
    double r,l,w,Ar,Ac;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf",&l);
        w  = (0.6*l);
        r  = l*0.2;
        Ar = l*w;
        Ac = Pi*r*r;

        printf("%0.2lf %0.2lf\n",Ac,(Ar - Ac));
    }
    return 0;
}
