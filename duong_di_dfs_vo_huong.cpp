#include <bits/stdc++.h>
#define N 10000
using namespace std;
bool visited[1001];
vector<int> adj[1001];
int parent[1001];
void dfs(int u)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            parent[v] = u;
            dfs(v);
        }
    }
}

void duongDi(int s, int t)
{
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    vector<int> path;
    if (!visited[t])
    {
        cout << "No path!" << endl;
    }
    else
    {
        while (s != t)
        {
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for (int x : path)
        {
            cout << x << " ";
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
        int n, m, s, t;
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cin >> s >> t;
        duongDi(s, t);
    }
    return 0;
}
