#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<float,int>p1,pair<float,int>p2)
{
    return p1.first>p2.first;
}
float fractionalKnapsack(vector<int>weights,vector<int>values,int capacity,int n)
{
    vector<pair<float,int>>ratio(n,make_pair(0.0,0));
    for(int i=0;i<n;i++)
        ratio[i] = make_pair(((float)values[i]/(float)weights[i]),i);
    sort(ratio.begin(),ratio.end(),cmp);
    int total = 0.0;
    for(int i=0;i<n;i++)
    {
        int index = ratio[i].second;
        if(weights[index]<=capacity)
        {
            capacity-=weights[index];
            total+=values[index];
        }
        else{
            total+=values[index]*((float)capacity/(float)weights[index]);
            break;
        }
    }
    return total;
}
int main()
{
    cout<<"Enter the number of elements you want to : "<<endl;
    int n;
    cin>>n;

    cout<<"Enter weights :"<<endl;

    vector<int>weights;
    for(int i=0;i<n;i++)
    {
        int weight;
        cin>>weight;
        weights.push_back(weight);
    }
    vector<int>values;
    cout<<"Enter values : "<<endl;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        values.push_back(value);
    }
    for(int i=0;i<n;i++)
        cout<<weights[i]<< " "<<values[i]<<endl;
    cout<<"Enter capacity :"<<endl;
    int capacity;
    cin>>capacity;
    cout<<"The maximum value is :"<<fractionalKnapsack(weights,values,capacity,n)<<endl;
    return 0;
}
