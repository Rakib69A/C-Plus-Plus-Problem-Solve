#include<iostream>
using namespace std;
int partition(int A[],int low,int heigh)
{
    int pivot = A[low];
    int i=low,j=heigh;
    while(i<j)
    {
        do
        {
            i++;
        }
        while(A[i]<=pivot);
        do
        {
            j--;
        }
        while(A[j]>pivot);
        if(i<j)
            swap(A[i],A[j]);
    }
    swap(A[low],A[j]);
    return j;
}
void QuickSort(int A[],int low,int heigh)
{
    if(low<heigh)
    {
        int j = partition(A,low,heigh);
        QuickSort(A,low,j);
        QuickSort(A,j+1,heigh);
    }
}
void printArray(int A[],int n)
{
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
int main()
{
    int A[]= {10,16,8,12,15,6,3,9,5};
    int n = sizeof(A)/sizeof(A[0]);

    cout<<"Unsorted Array : "<<endl;
    printArray(A,n);

    QuickSort(A,0,n);

    cout<<"Sorted Array : "<<endl;
    printArray(A,n);
    return 0;
}
