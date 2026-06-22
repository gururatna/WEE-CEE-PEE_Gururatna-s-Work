#include <bits/stdc++.h>
using namespace std;

#define int long long
#define inf 1e18
#define ninf -1e18
#define endl "\n"
struct Project {
    int start, end, reward;
};

void solve()
{
    int n;
    if (!(cin >> n)) return;

    vector<Project> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].start >> v[i].end >> v[i].reward;
    }

  
    sort(v.begin(), v.end(), [](const Project &a, const Project &b) {
        return a.end < b.end;
    });

   
    vector<int> dp(n + 1, 0);
    vector<int> end_times;

    for (int i = 1; i <= n; i++)
    {
        
        int exclude_project = dp[i - 1];

        
        int include_project = v[i - 1].reward;

       
        auto it = lower_bound(end_times.begin(), end_times.end(), v[i - 1].start);
        
      
        int idx = distance(end_times.begin(), it);
        
        include_project += dp[idx];

       
        dp[i] = max(exclude_project, include_project);


        end_times.push_back(v[i - 1].end);
    }

    cout << dp[n] << endl;
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