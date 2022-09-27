#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    cout<<"Vertex is :"<<vertex<<endl;
    vis[vertex] = true;
    for(auto child : g[vertex])
    {
        cout<<"parent : "<<vertex<<"-------------------->child : "<<child<<endl;
        if(vis[child)continue;
        dfs(child);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int vertex;
    cout<<"Enter the vertex from where you wanted to search "<<endl;
    cin>>vertex;
    dfs(vertex);
}
