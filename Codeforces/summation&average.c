/*program of summation and average */
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three integer value\n");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    avg=(a+b+c)/3.0;
    printf("The summation of three number are = %d\n",sum);
    printf("The average of three number are = %.2f",avg);
    return 0;
}
