#include<iostream>
using namespace std;
int add_at_end(int a[],int freePos,int data)
{
    a[freePos]=data;
    freePos++;
    return freePos;
}
int main()
{
    int a[10];
    int i,n,freePos;
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    freePos=n;
    freePos = add_at_end(a,freePos,65);
    for(i=0;i<freePos;i++)
        cout<<a[i]<<" "<<endl;
    return 0;
}
