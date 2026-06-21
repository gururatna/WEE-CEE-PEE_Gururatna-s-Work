#include <bits/stdc++.h>

using namespace std;


#define int long long
#define inf 1e18
#define ninf - 1e18

void solve()
{
    int x;
    cin >> x;
    map < int, pair < int, int >> sums;
    for (int j = 1; j < x + 1; j++)
    {
        int n;
        cin >> n;
        int sum = 0;
        vector < int > v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        for (int i = 0; i < n; i++)
        {
            int ans = sum - v[i];
            if (sums.contains(ans) and j != sums[ans].first)
            {
                cout << "YES" << "\n" << j << " " << i + 1 << endl;
                cout << sums[ans].first << " " <<
                    sums[ans].second + 1 << endl;

                return;
            }
            else
            {
                sums[ans] = {j,i};
            }
        }
    }
    cout << "NO" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {

        solve();

    }
}