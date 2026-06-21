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
    vector<int> a(n), b(n);
    for (auto &e : a)
        cin >> e;
    for (auto &e : b)
        cin >> e;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
            x += a[i];
        else if (a[i] < b[i])
            y += b[i];
    }
    int mx = max(x, y);
    int mn = min(x, y);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            if (a[i] == 0)
                continue;
            if (a[i] == 1)
            {
                int r = mn + 1;
                int q = mx;
                mx = max(r, q);
                mn = min(r, q);
            }
            if (a[i] == -1)
            {
                int r = mn;
                int q = mx - 1;
                mx = max(r, q);
                mn = min(r, q);
            }
        }
    }

    cout << mn << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }
}