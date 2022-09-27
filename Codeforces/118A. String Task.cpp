#include<iostream>
#include<stdio.h>

#include<cstring>
using namespace std;
int main()
{
    char str[100];
    int len, i, j,k,n;

    gets(str);
    len=strlen(str);
    n=len;
    for(int k=0; k<n; k++)
    {
        for(i=0; i<len; i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
                    str[i]=='o' || str[i]=='u'||str[i]=='y' || str[i]=='A' ||
                    str[i]=='E' || str[i]=='I' || str[i]=='O' ||
                    str[i]=='U'||str[i]=='Y')
            {
                for(j=i; j<len; j++)
                {
                    str[j]=str[j+1];
                }
                len--;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=92)
        {
            str[i]+=32;
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<"."<<str[i];
    }

    return 0;
}
