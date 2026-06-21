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

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

    }
    map < int, vector < int >> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.contains(v[i] - 1))
        {
            ans[v[i]] = ans[v[i] - 1];
            ans[v[i]][1] = i;
            ans[v[i]][2] = ans[v[i] - 1][2] + 1;
        }


        else
            ans[v[i]] = {
                i,
                i,
                1
            };

    }
    int mx = 0;
    int l = 0;
    for (const auto & [key, value]: ans)
    {
        int s = value[2];
        mx = max(mx, s);
        if (mx == s) l = key;
    }
    cout << mx << endl;
    int curr = l - ans[l][2] + 1;
    for (int i = ans[l][0]; i <= ans[l][1]; i++)
    {
        if (v[i] == curr) {
            cout << i + 1 << " ";
            curr++;
        }

    }
    cout << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while (t--) {

        solve();

    }
}