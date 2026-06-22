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
    for (auto &e : v)
        cin >> e;
    vector<int>b={v[0]};
    for(int i=1;i<n;i++)
    {
        auto it=lower_bound(b.begin(),b.end(),v[i]);
        if(it!=b.end())
        {
            b[it-b.begin()]=v[i];
        }
        else b.push_back(v[i]);
    }
    cout<<b.size()<<endl;
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