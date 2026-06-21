#include <bits/stdc++.h>
using namespace std;
 
 
#define int long long
#define inf 1e18
#define ninf -1e18
 
signed main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t=1;
    //cin >> t;
    while (t--) {
       
       // cin >> n;
        int y;cin>>y;
        set<int> v;
        for (int i=0;i<y;i++)
        {int x;
            cin >> x;
            v.insert(x);
             
        }int ans=v.size();
        
       cout<<ans<<endl;
    }
}