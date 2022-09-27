#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    cout<<"Vertex : "<<vertex<<endl;
    vis[vertex] = true;
    for(auto child:g[vertex])
    {
        cout<<"Parent : "<<vertex<<"------------------>Child : "<<child<<endl;
        if(vis[child])continue;
        dfs(child);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        dfs(i);
        count++;
    }
    cout<<"Connected component number is : "<<count<<endl;
}
