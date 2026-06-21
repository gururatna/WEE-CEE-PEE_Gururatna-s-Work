#include <bits/stdc++.h>

using namespace std;


#define int long long
#define inf 1e18
#define ninf - 1e18

void solve()
{
    int n;
    cin >> n;

    vector < int > v(n);
    vector < int > del(n, 1e9);
    del[n - 1] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

    }
    for (int i = n - 2; i >= 0; i--)
    {
        int l = n - 1 - i;

        if (v[i] == l) del[i] = 0;
        if (i + v[i] + 1 < n) del[i] = min(del[i], del[i + v[i] + 1]);

        {
            if (v[i] > l) del[i] = min(del[i + 1] + 1, del[i]);

            else del[i] = min(del[i], min(del[i + 1] + 1, l - v[i]));
        }
    }
    cout << del[0] << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        solve();

    }
}