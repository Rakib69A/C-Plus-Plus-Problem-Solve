#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = (int *)malloc(2*sizeof(int));
    if(ptr==NULL)
        cout<<"Memory could not be allocated!"<<endl;
    else
        cout<<"Memory allocated successfully..!"<<endl;
    return 0;
}
