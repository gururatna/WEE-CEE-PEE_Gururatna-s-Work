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
    vector < int > p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];

    }
    sort(p.begin(), p.end());
    map < string, int > fr;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if (fr.contains(s)) fr[s]++;
        else fr[s] = 1;

    }
    vector < int > v;
    for (const auto & [key, value]: fr)
    {
        v.push_back(value);
    }
    sort(v.begin(), v.end());
 //   for (auto e: v) cout << e;
    int mn = 0;
    for (int i = v.size() - 1; i >= 0; i--) mn += v[i] * p[v.size() - 1 - i];
    int mx = 0;
    for (int i = 0; i < v.size(); i++) mx += v[i] * p[n - v.size() + i];

    cout << mn << " " << mx << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //  cin >> t;
    while (t--) {

        solve();

    }
}