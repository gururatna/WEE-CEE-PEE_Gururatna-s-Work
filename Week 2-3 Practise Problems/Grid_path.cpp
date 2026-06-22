#include <bits/stdc++.h>
using namespace std;

#define int long long
#define inf 1e18
#define ninf -1e18
#define endl "\n"

void solve()
{

    int n;
    cin >> n;
    int m = 1e9 + 7;
    vector<vector<int>> board(n, vector<int>(n));
    for (auto &e : board)
    {
        for (auto &f : e)
        {
            char a;
            cin >> a;
            if (a == '*')
                f = -1;
            else
                f = 0;
        }
    }
    vector<vector<int>> ans(n, vector<int>(n, 0));
    if (board[n - 1][n - 1] == 0)
        ans[n - 1][n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (board[j][i] == -1)
                continue;
            if (j + 1 < n and board[j + 1][n] == 0)
                ans[j][i] += ans[j + 1][i] % m;
            if (board[j][i + 1] == 0)
                ans[j][i] += ans[j][i + 1] % m;
        }
        for (int j = n - 1; j >= i; j--)
        {
            if (board[i][j] == -1)
                continue;
            if (board[i + 1][j] == 0)
                ans[i][j] += ans[i + 1][j] % m;
            if (j + 1 < n and board[i][j + 1] == 0)
                ans[i][j] += ans[i][j + 1] % m;
        }
    }

    cout << ans[0][0] % m << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {

        solve();
    }
}