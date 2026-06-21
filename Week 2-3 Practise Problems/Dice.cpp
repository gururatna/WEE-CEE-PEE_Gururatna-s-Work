#include <bits/stdc++.h>
using namespace std;

#define int long long
#define inf 1e18
#define ninf -1e18
#define endl "\n"

void solve()
{
    int m = 1e9 + 7;
    int n;
    cin >> n;
    vector<int> v(n + 1, 1);
    for (int i = 2; i < n + 1; i++)
    {
        int x = 0;
        for (int j = 1; j <= 6; j++)
        {

            x += v[i - j] % m;
            if (i == j)
                break;
        }
        v[i] = x;
    }
    cout << v[n] % m << endl;
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