#include <bits/stdc++.h>
#define N 10000
using namespace std;
/*
pseudocodde:
- Bat dau duyet tu dinh u
DFS(u){
    <tham dinh u>;
    visited(u)=true;
    for(v:adj[u]){
        if(!visited[v])
            {DFS(v);}
}
}*/
bool visited[1001];
vector<int> adj[1001];
void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        memset(visited, false, sizeof(visited));
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1);
    }
    return 0;
}
