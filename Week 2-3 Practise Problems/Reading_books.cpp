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

    vector<int> v(n);
    int sum = 0;
    for (auto &e : v)
    {
        cin >> e;
        sum += e;
    }
    sort(v.begin(), v.end());
    cout << max(2 * v[n - 1], sum);
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