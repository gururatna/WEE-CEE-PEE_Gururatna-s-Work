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
    vector<int> v(n, 1);
    for (int i = 9; i < n; i++)
    {
        int num = i + 1;
        int mn = inf;
        while (num)
        {
            int x = num % 10;
            if (x)
                mn = min(mn, v[i - x] + 1);
            num /= 10;
        }
        v[i] = mn;
    }
    cout << v[n - 1] << endl;
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