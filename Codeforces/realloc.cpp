#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int *ptr = (int *)malloc(2*sizeof(int));
    if(ptr==NULL)
    {
        cout<<"Memory is not available..!"<<endl;
        exit(1);
    }
    cout<<"Enter the two number :"<<endl;
    for(i=0;i<2;i++)
        scanf("%d",ptr+i);
    ptr = (int *)realloc(ptr,4*sizeof(int));
    if(ptr==NULL)
    {
        cout<<"Memory is not available..!"<<endl;
        exit(1);
    }
    cout<<"Enter the two more integers :"<<endl;
    for(i=2;i<4;i++)
        scanf("%d",ptr+i);
    for(i=0;i<4;i++)
        cout<<*(ptr+i)<<endl;
    return 0;
}
