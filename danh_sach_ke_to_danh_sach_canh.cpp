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
        vector<pair<int, int>> list;
        int mt[100][100];
        int n;
        cin >> n;
        cin.ignore();
        for (int i = 1; i <= n; i++)
        {
            string s, number;
            getline(cin, s);
            stringstream ss(s);
            while (ss >> number)
            {
                if (i < stoi(number))
                {
                    list.push_back({i, stoi(number)});
                }
            }
        }
        for (auto it : list)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}
