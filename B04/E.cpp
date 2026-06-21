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
    int sum = 0;
    for (auto &e : v)
    {
        cin >> e;
        sum += e;
    }
    if (sum % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    int l = -1, r = 0;
    int ct = 0;
    vector<pair<int, int>> output;
    while (l <= r and r < n)
    {
        if (v[r] == 0 and l == -1)
        {
            output.push_back({r + 1, r + 1});
            ct++;
        }
        else if (abs(v[r]) == 1 and l == -1)
            l = r;

        else if (l != -1 and abs(v[r]) == 1)
        {
            if (v[r] * v[l] == 1)
            {
                if ((r - l - 1) % 2 == 0)
                {
                    output.push_back({l + 1, r + 1});
                    ct++;
                }
                else
                {
                    output.push_back({l + 1, l + 1});
                    output.push_back({l + 2, r + 1});
                    ct += 2;
                }
            }
            else
            {
                if ((r - l - 1) % 2 == 1)
                {
                    output.push_back({l + 1, r + 1});
                    ct++;
                }
                else
                {
                    output.push_back({l + 1, l + 1});
                    output.push_back({l + 2, r + 1});
                    ct += 2;
                }
            }
            l = -1;
        }
        r++;
    }
    cout << ct << endl;
    for (auto &e : output)
        cout << e.first << " " << e.second << endl;
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