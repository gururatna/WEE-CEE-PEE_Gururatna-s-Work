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
    int x;
    cin >> x;
    vector<int> ans(x, inf);
    vector<int> v(n, 1);
    for (auto &e : v)
    {
        cin >> e;
        if(e-1<x)ans[e - 1] = 1;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < x; i++)
    {
        if (ans[x] == 1)
            continue;
        for (auto e : v)
            if (i >= e)
                ans[i] = min(ans[i], ans[i - e] + 1);
    }
    if(ans[x-1]>=inf)cout<<-1<<endl;
    else cout<<ans[x-1]<<endl;
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