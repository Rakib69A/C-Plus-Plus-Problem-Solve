#include<bits/stdc++.h>
using namespace std;
///structure for an item which stores weight and corresponding value of Item
struct Item
{
    int value,weight;
    //constructor
    Item(int value,int weight)
    {
        this->value = value;
        this->weight = weight;
    }
};
//comparison function to sort Item according to value/weight ratio
bool cmp(struct Item a,struct Item b)
{
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}
double fractionalKnapsack(int w,struct Item arr[],int n)
{
    //sorting Item on basis of ratio
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].value<<" "<<arr[i].weight<<" : "<<(double)arr[i].value/arr[i].weight<<endl;
    }
    double finalvalue = 0.0;//Result(value in knapsack)
    //Looping through all Items
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
    int w=50;
    Item arr[] = {{60,10},{100,20},{120,30}};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<fractionalKnapsack(w,arr,n)<<endl;
    return 0;
}

