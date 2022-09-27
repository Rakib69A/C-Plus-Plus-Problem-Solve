#include<stdio.h>
int main()
{
     long int r, n, k,i,result,m=0,set;
     while(scanf("%ld%ld",&r,&n)==2)
     {
        m++;
        set=0;
        if(r==0 && n==0)
        {
                 return 0;
        }
        else
        {

                     for(i=0;i<=26;i++)
                    {
                          if(r<=(n*(i+1)) && r>1)
                          {
                            result=i;
                            set=1;
                            break;
                         }
                         if(r<=1)
                         {
                               result=0;
                               set=1;
                               break;
                        }

                  }
                  if(set==0)
                       printf("Case %ld: impossible\n",m);
                  else
                      printf("Case %ld: %ld\n",m,result);

        }
    }
    return 0;
}
