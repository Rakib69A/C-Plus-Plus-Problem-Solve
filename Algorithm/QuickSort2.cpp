#include<iostream>
using namespace std;
int partition(int arr[],int low,int heigh)
{
    int pivot = arr[low];
    int i=low,j=heigh;
    while(i<j)
    {
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)
            swap(arr[i],arr[j]);;
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low ,int heigh)
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
        cout<<arr[i]<<"     ";
    cout<<endl;
}
int main()
{
    int arr[] = {10,16,8,12,15,6,3,9,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array :"<<endl;
    printArray(arr,n);
    quickSort(arr,0,n);
    cout<<"Sorted array :"<<endl;
    printArray(arr,n);
}
