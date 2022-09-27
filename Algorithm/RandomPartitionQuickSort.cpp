#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Partition(int arr[],int low,int heigh)
{
    int i=low,j=heigh;
    int pivot = arr[low];
    while(i<j)
    {
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)
            swap(&arr[i],&arr[j]);
    }
    swap(&arr[low],&arr[j]);
    return j;
}
int Random_Partition(int arr[],int low,int heigh)
{
    int pivot,n,temp;
    n = rand();
    pivot = low+n%(heigh-low+1);
    swap(&arr[heigh],&arr[pivot]);
    return Partition(arr,low,heigh);
}
void QuickSort(int arr[],int low,int heigh)
{
    if(low<heigh)
    {
        int j=Random_Partition(arr,low,heigh);
        QuickSort(arr,low,j);
        QuickSort(arr,j+1,heigh);
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"     ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Unsorted Array : "<<endl;
    printArray(arr,n);
    QuickSort(arr,0,n);
    cout<<"Sorted Array :" <<endl;
    printArray(arr,n);
}
