#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int *ptr = (int *)malloc(2*sizeof(int));
    if(ptr==NULL)
    {
        cout<<"Memory could not available..!!"<<endl;
        exit(1);
    }
    cout<<"Enter two numbers :"<<endl;
    for(i=0;i<2;i++)
    {
        scanf("%d",ptr+i);
    }
    ptr = (int *)realloc(ptr,4*sizeof(int));
    cout<<"Enter two more numbers :"<<endl;
    for(i=2;i<4;i++)
        scanf("%d",ptr+i);
    cout<<"All the numbers are :"<<endl;
    for(i=0;i<4;i++)
        cout<<*(ptr+i)<<" ";

    return 0;
}
