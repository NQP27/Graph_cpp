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
        vector<pair<int, int>> edge;
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
                    edge.push_back(make_pair(i, j));
                }
            }
        }
        for (auto it : edge)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}
