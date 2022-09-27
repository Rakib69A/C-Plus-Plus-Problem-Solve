#include<iostream>
#include<algorithm>
using namespace std;
struct Job{
    char id;
    int dead;
    int profit;
};
int cmp(Job a,Job b)
{
    return (a.profit>b.profit);
}
int JobSequencing(Job arr[],int n)
{
    sort(arr,arr+n,cmp);
    cout<<"After sorting : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].id<<"  "<<arr[i].profit<<"  "<<arr[i].dead<<endl;
    }
    int result[n];
    int slot[n];
    for(int i=0;i<n;i++)
        slot[i] = false;
    for(int i=0;i<n;i++)
    {
        for(int j = min(n,arr[i].dead)-1;j>=0;j--)
        {
            if(slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    cout<<"Following is maximum profit :"<<endl;
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<arr[result[i]].id<<"  ";
        }
    }
}
int main()
{
    Job arr[] = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].id<<"  "<<arr[i].profit<<"  "<<arr[i].dead<<endl;
    }
    JobSequencing(arr,n);
    return 0;
}
