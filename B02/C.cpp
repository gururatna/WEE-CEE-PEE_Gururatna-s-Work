#include <bits/stdc++.h>
using namespace std;


#define int long long
#define inf 1e18
#define ninf -1e18

signed main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin >> t;
    while (t--) {
       
     //  int n; cin >> n;
     
    int x,y,k;cin>>x>>y>>k;int ans=0;
    if(k==1)ans=1;
    if(k==2)ans=y/x +min(x-1,y);
    if(k==3)ans=y+1-(y/x +min(y,x-1)+1);
    cout<<ans<<endl;
 
    }
}