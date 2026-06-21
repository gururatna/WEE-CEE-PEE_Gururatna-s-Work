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
    
    if(n<=1)cout<<-1;
    else if(n==2)cout<<66;
    else if(n==3)cout<<-1;
    else if (n%2==0)
    {
        for(int i=0;i<n-2;i++)cout<<3;
        cout<<66;
    }
    else if(n%2==1)
    {
        for(int i=0;i<n-4;i++)cout<<3;
        cout<<6366;
    }
    cout<<endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--)
    {

        solve();
    }
}