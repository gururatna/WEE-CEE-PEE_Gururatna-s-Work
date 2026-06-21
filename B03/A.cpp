#include <bits/stdc++.h>

using namespace std;


#define int long long
#define inf 1e18
#define ninf - 1e18

void solve()
{

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector < int > v(m);
    for (int i = 0; i < m; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int ans = 1 - v[m - 1] - v[m - 1];
    for (auto e: v) ans += e + e - 1;
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {

        solve();

    }
}