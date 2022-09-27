#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(pair<float,int>p1,pair<float,int>p2)
{
    return p1.first>p2.first;
}
int fractionalKnapsack(vector<int>weights,vector<int>values,int capacity)
{
    int len = weights.size();
    int total_value = 0;
    ///vector to store the items based on their value/weight ratios
    vector<pair<float,int>>ratio(len,make_pair(0.0,0));
    for(int i=0;i<len;i++)
        ratio[i] = make_pair(values[i]/weights[i],i);
    ///now sort the ratios in non-increasing order
    ///for this purpose, we will use our custom
    /// comparator function
    sort(ratio.begin(),ratio.end(),compare);

    ///start selecting the items
    for(int i=0;i<len;i++)
    {
        if(capacity == 0)
            break;
        int index = ratio[i].second;
        if(weights[index]<=capacity)
        {
            //we can fit item into the knapsack hence take the whole of it
            capacity-=weights[index];
            //add the value of this item to the final answer
            total_value+=values[index];
        }
        else
        {
            //this item dosen't fit into the bag and thus we take fraction of it
            total_value += values[index]*(float(capacity)/(float)(weights[index]));
            break;
        }
    }
    return total_value;
}
int main()
{
    cout<<"Enter the weight of the items, press -1 to stop"<<endl;
    vector<int>weights;
    while(true)
    {
        int weight;
        cin>>weight;
        if(weight==-1)
            break;
        weights.push_back(weight);
    }
    cout<<"Enter the values of each item ,press -1 to stop "<<endl;
    vector<int>values;
    while(true)
    {
        int value;
        cin>>value;
        if(value == -1)
            break;
        values.push_back(value);
    }
    cout<<"Enter the capacity of the knapsack"<<endl;
    int capacity;
    cin>>capacity;

    cout<<"The maximum value possible based on current list is: "<<fractionalKnapsack(weights,values,capacity)<<endl;
    return 0;
}
