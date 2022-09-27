#include<iostream>
using namespace std;
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    if(ptr==NULL)
        cout<<"Memory could not be allocated..!!"<<endl;
    else
        cout<<"Memory allocated successfully...!!!"<<endl;
    return 0;
}
