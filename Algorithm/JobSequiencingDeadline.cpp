#include<iostream>
#include<algorithm>
using namespace std;
struct Job{
        char id;
        int dead;
        int profit;
};
bool cmp(Job a,Job b)
{
    return (a.profit>b.profit);
}
void printJobScheduling(Job arr[],int n)
{
    sort(arr,arr+n,cmp);
    int result[n];//to store result (sequence of jobs
    int slot[n];//To keep track of free time slots

    //Initialize all slots to be free
    for(int i=0;i<n;i++)
        slot[i] = false;

    //iterate through all given jobs
    for(int i=0;i<n;i++)
    {
        //Find a free slot for this job (Note that we start
        //from the last possible slot)
        for(int j=min(n,arr[i].dead)-1;j>=0;j--)
        {
            //Free slot found
            if(slot[j]==false)
            {
                result[j]=i;//Add this job to result
                slot[j] = true;//Make this slot occupied
                break;
            }
        }
    }
    //print the result
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<arr[result[i]].id<<" ";
        }
    }
}
int main()
{
    Job arr[] = {{'a',2,100},
                 {'b',1,19},
                 {'c',2,27},
                 {'d',1,25},
                 {'e',3,15}};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Following is maximum profit sequencing of jobs "<<endl;
    printJobScheduling(arr,n);
}
