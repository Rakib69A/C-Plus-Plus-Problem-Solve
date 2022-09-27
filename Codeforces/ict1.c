#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float x;
    scanf("%d%d",&a,&b);
    ///summation
    c=a+b;
    printf("summation = %d\n",c);
    ///subtraction
    c=a-b;
    printf("subtraction = %d\n",c);
    ///multiplication
    c=a*b;
    printf("multiplication = %d\n",c);
    x=(float)a/b;
    printf("division = %.3f\n",x);
    getch();

}
