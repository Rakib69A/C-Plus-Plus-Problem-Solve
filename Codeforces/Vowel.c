#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        printf("%c is vowel",a);
    }
else
           {
        printf("%c is consonant",a);
    }
}
