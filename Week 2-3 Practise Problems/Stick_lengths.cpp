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
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int ans = 0;
    for (auto e : v)
    {
        ans += abs(e - v[n / 2]);
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