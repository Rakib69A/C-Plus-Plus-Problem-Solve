
#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,temp,cases;
    scanf("%d",&cases);
    while(cases--)
    {
       scanf("%d %d",&x,&y);
       if(x==y){
           temp=ceil(x/2.0);
           printf("%d\n",(temp*(temp+1)/2));
       }
       else{
           printf("%d\n",(int)(ceil(x/2.0)*ceil(y/2.0)));
       }
    }

       return 0;
}
