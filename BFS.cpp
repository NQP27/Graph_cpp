#include <bits/stdc++.h>
#define N 10000
using namespace std;
/*
pseudocode:
Step1: Khoi tao
queue = rong;
push(queue,u);
visited[u]=true;
Step2: Lap khi hang doi van con phan tu
while(queue != rong){
    v=queue.front();
    queue.pop();
    <tham dinh v>;
    for(auto x: adj[v]){
        if(!visiteed[x]){
            queue.push_back(x);
            visited[x]=true;
        }
    }
}
*/
bool visited[1001];
vector<int> adj[1001];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (q.size() != 0)
    {
        int v = q.front();
        cout << v << " ";
        q.pop();
        for (auto x : adj[v])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
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
        bfs(1);
    }
    return 0;
}
