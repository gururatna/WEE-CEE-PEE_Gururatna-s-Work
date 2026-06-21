
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
    int m = 1e9 + 7;
    vector<int> v(n, 1);
    for (auto &e : v)
        cin >> e;
    sort(v.begin(), v.end());

    vector<vector<int>> ans(x + 1, vector<int>(n, 0));
    for (int i = 1; i <= x; i++)
    {

        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {   if(v[k]<=v[j])continue;
                int e = v[j];
                if (i - e >= 0)
                {
                    ans[i][k] += ans[i - e][j] % m;
                }
            }
        }
       
    }
    int sum=0;
    for(auto e:ans[x])sum+=e;
    cout << sum << endl;
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