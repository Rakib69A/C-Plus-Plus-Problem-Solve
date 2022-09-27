#include<bits/stdc++.h>
using namespace std;
int *input()
{
    int *ptr,i;
    ptr = (int *)malloc(5*sizeof(int));
    cout<<"Enter 5 number"<<endl;
    for(i=0;i<5;i++)
        scanf("%d",ptr+i);
    return ptr;
}
int main()
{
    int i,sum = 0;
    int *ptr = input();
    for(i=0;i<5;i++)
    {
        sum+=*(ptr+i);
    }
    cout<<sum<<endl;
    free(ptr);
    ptr = NULL;
    return 0;
}
