#include <bits/stdc++.h>
using namespace std;

#define int long long
#define inf 1e18
#define ninf -1e18
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int po = 0;
        bool seen = false;
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0)
            {
                ans++;
                if (seen)
                    po++;
                //cout << i << "*" << j << "%";
            }
            else
            {
                seen = true;
                //if (po)
                    //cout << i << "*" << j << "%";
                ans += po;
                po = 0;
            }
        }
        if (!seen)
            ans -= m;
    }
    for (int j = 0; j < m; j++)
    {
        int po = 0;
        bool seen = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i][j] == 0)
            {
                ans++;
                if (seen)
                    po++;
            }
            else
            {
                seen = true;
                ans += po;
                po = 0;
            }
        }
        if (!seen)
            ans -= n;
    }

    cout << ans << endl;
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