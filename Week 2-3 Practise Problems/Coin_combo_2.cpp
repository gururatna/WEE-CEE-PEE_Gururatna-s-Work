
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define inf 1e18
#define ninf -1e18
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    int m = 1e9 + 7;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    
    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for (int j = 0; j < n; j++)
    {
        for (int i = v[j]; i <= x; i++)
        {
            dp[i] = (dp[i] + dp[i - v[j]]) % m;
        }
    }

    cout << dp[x] << endl;
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