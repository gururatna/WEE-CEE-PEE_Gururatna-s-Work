
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
    int x;
    cin >> x;
    int m = 1e9 + 7;
    vector<int> v(n, 1);
    for (auto &e : v)
        cin >> e;
    sort(v.begin(), v.end());

    vector<int> ans(x + 1, 1);
    for (int i = 1; i <= x; i++)
    {
        int x = 0;
        for (auto e : v)
        {
            if (i - e >= 0)
                x += ans[i - e] % m;
        }
        ans[i] = x%m;
    }
    cout << ans[x] << endl;
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