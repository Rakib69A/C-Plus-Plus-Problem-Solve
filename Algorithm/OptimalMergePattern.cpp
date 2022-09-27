#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    priority_queue<int,vector<int>,greater<int> > minheap;
    for(int i=0;i<n;i++)
    {
        minheap.push(arr[i]);
    }
    int ans = 0;
    while(minheap.size()>1)
    {
        int first_smallest = minheap.top();
        minheap.pop();
        int second_smallest = minheap.top();
        minheap.pop();
        ans+=first_smallest+second_smallest;
        minheap.push(first_smallest+second_smallest);
    }
    cout<<ans<<endl;
    return 0;
}
