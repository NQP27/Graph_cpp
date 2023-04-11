#include <bits/stdc++.h>
#define N 10000
using namespace std;
bool visited[1001];
vector<int> adj[1001];
int n, m;
bool dfs(int u, int parent)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            if (dfs(v, u))
            {
                return true;
            }
        }
        else if (v != parent)
        {
            return true;
        }
    }
    return false;
}
bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, 0))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        if (check())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}