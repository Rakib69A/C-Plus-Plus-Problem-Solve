#include<bits/stdc++.h>
using namespace std;
struct Item
{
    int value,weight;
    item(int value,int weight)
    {
        this -> value = value;
        this -> weight = weight;
    }
};
bool cmp(struct Item a,struct Item b)
{
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}
double fractionalKnapsack(struct Item arr[],int n,int w)
{
    sort(arr,arr+n,cmp);
    for(int i=0; i<n; i++)
        cout<<arr[i].value<<" "<<arr[i].weight<<" : "<<(double)arr[i].value/arr[i].weight<<endl;
    double finalvalue = 0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weight<=w){
            w-=arr[i].weight;
            finalvalue+=arr[i].value;
        }
        else{
            finalvalue+=arr[i].value*((double)w/(double)arr[i].weight);
            break;
        }
    }
    return finalvalue;
}
int main()
{
    int w=15;
    Item arr[] = {{12,3},{5,1},{16,4},{7,2},{9,9},{11,4},{6,3}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<fractionalKnapsack(arr,n,w);
    return 0;
}
