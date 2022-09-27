#include<stdio.h>
#include<string.h>
int main ()
{
    char str[12];
    int n,i,sum = 0,T;
    scanf("%d\n",&T);
    while(T--)
    {
        sum = 0;
        scanf("%d\n",&n);
        for(i = 1 ; i <= n ; i++)
        {

            gets(str);
            if(strcmp(str,"RIGHT")==0 )
            {
                sum += 1;
            }

            else if(strcmp(str,"LEFT")==0 )
            {
                sum += -1;
            }

        }
        printf("%d\n",sum);

    }
    return 0;
}
