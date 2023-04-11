#include <bits/stdc++.h>
#define N 10000
using namespace std;
int color[1001];
vector<int> adj[1001];
int n, m;
bool dfs(int u)
{
    color[u] = 1;
    for (auto v : adj[u])
    {
        if (color[v] == 0)
        {
            if (dfs(v))
            {
                return true;
            }
        }
        else if (color[v] == 1)
        {
            return true;
        }
    }
    color[u] = 2;
    return false;
}
bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == 0)
        {
            if (dfs(i))
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
        memset(color, 0, sizeof(color));
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
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