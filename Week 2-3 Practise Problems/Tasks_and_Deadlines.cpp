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
    int ans = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
 
        if (i % 2 == 0)
            v.push_back(x);
        else
            ans += x;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        ans -= v[i] * (i + 1);
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