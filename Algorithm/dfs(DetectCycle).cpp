#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

bool dfs(int vertex,int parent)
{
    cout<<"vertex : "<<vertex<<endl;
    vis[vertex] = true;
    bool isLoopExists = false;
    for(auto child:g[vertex])
    {
        cout<<"Parent : "<<vertex<<"--- child : "<<child<<endl;
        if(vis[child] && child==parent)continue;
        if(vis[child])return true;
        isLoopExists |= dfs(child,vertex);
    }
    return isLoopExists;
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
    bool isLoopExists = false;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
       if(dfs(i,0)){
        isLoopExists = true;
       }
    }
    cout<<isLoopExists<<endl;

    return 0;

}
