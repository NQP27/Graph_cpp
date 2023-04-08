#include <bits/stdc++.h>
#define N 10000
using namespace std;

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
                mt[i][stoi(number)] = 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << mt[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
