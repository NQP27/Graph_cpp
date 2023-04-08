#include <bits/stdc++.h>
#define N 10000
using namespace std;

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
        vector<int> adj[100];
        int n, a[100][100];
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                if (a[i][j] == 1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for (auto it : adj[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
