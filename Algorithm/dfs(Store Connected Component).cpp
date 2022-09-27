#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
vector<vector<int> > cc;
vector<int> current_cc;
bool vis[N];

void dfs(int vertex)
{
    cout<<"Vertex : "<<vertex<<endl;
    current_cc.push_back(vertex);
    vis[vertex] = true;
    for(auto child:g[vertex])
    {
        cout<<"parent : "<<vertex<<"-----> Child : "<<child<<endl;
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
        current_cc.clear();
        if(vis[i])continue;
        dfs(i);
        cc.push_back(current_cc);
        count++;
    }
    cout<<cc.size()<<endl;
    for(auto c_cc:cc){
        for(auto vertex:c_cc){
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
}
