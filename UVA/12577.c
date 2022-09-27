#include<stdio.h>
#include<string.h>
int main ()
{
    char str[6];
    int i = 0;

    while(gets(str))
    {
        if(strcmp(str,"Hajj")==0 )
        {
            printf("Case %d: Hajj-e-Akbar\n",++i);
        }
        else if(strcmp(str,"Umrah")==0 )
        {
            printf("Case %d: Hajj-e-Asghar\n",++i);
        }
        else
            break;
    }
    return 0;
}
