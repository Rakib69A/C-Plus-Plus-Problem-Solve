#include<stdio.h>
int main()
{
    int i=10;
    start:
        printf("%d\n",i);
        i=i+10;
        if(i<=100)
        {
            goto start;
        }
}
