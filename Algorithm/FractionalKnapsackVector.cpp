#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(pair<float,int>p1,pair<float,int>p2)
{
    return p1.first>p2.first;
}
float fractionalKnapsack(vector<int>weights,vector<int>values,int capacity,int n)
{
    float total = 0.0;
    vector<pair<float,int>>ratio(n,make_pair(0.0,0));
    for(int i=0;i<n;i++)
        ratio[i] = make_pair(values[i]/weights[i],i);
    sort(ratio.begin(),ratio.end(),compare);
    for(int i=0;i<n;i++)
    {
        int index = ratio[i].second;
        if(weights[index]<=capacity)
        {
            capacity-=weights[index];
            total+=values[index];
        }
        else{
            total += values[index]*((float)capacity/(float)weights[index]);
            break;
        }
    }
    return total;
}
int main()
{
    int n,m;
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    m=n;
    vector<int>weights;
    vector<int>values;
    cout<<"Enter weights :"<<endl;
    for(int i=0;i<n;i++)
    {
        int weight;
        cin>>weight;
        weights.push_back(weight);
    }
    cout<<"Enter values :"<<endl;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        values.push_back(value);
    }
    cout<<"printing weights and values :"<<endl;
    for(int i=0;i<m;i++)
        cout<<weights[i]<<" "<<values[i]<<endl;
    cout<<"Enter the capacity "<<endl;
    int capacity;
    cin>>capacity;
    cout<<"The maximum value is :"<<fractionalKnapsack(weights,values,capacity,n);
}
