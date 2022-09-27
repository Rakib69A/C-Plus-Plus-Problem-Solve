#include<iostream>
using namespace std;
int partition(int arr[],int low ,int heigh)
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
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int heigh)
{
    if(low<heigh)
    {
        int j = partition(arr,low,heigh);
        quickSort(arr,low,j);
        quickSort(arr,j+1,heigh);
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Unsorted Array :"<<endl;
    printArray(arr,n);
    quickSort(arr,0,n);
    cout<<"Sorted Array :"<<endl;
    printArray(arr,n);
}
