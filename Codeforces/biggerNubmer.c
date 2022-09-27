 #include<stdio.h>
 int main()
 {
     int a,b;
     scanf("%d%d",&a,&b);
     if(a>b)
     {
         printf("%d is bigger than %d",a,b);
     }
     if(a<b)
     {
         printf("%d is bigger than %d",b,a);
     }
     if(a==b)
     {
         printf("%d is equal to %d",a,b);
     }

 }
