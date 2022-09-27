#include<bits/stdc++.h>
using namespace std;
int *input()
{
    int i,*ptr;
    ptr = (int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
        scanf("%d",ptr+i);
    return ptr;
}
int main()
{
    int i,sum=0;
    int *ptr = input();
    for(i=0;i<5;i++)
        sum+=*(ptr+i);
    cout<<sum<<endl;
    return 0;
}
