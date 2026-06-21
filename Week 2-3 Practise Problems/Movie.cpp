
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
    vector<pair<int, int>> v(n);
    for (auto &e : v)
    {
        cin >> e.second;
        cin >> e.first;
    }
    sort(v.begin(),v.end());
    int ct=0;
    int i=0;
    int last_end=0;
 
    while(i<n)
    {
        if(v[i].second>=last_end)
        {
            ct++;
            last_end=v[i].first;
        }
        else i++;
 
    }
    cout<<ct<<endl;;
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