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
     
    int x,y,k;cin>>x>>y>>k;
    int r=k*(1+y)-1;
    int l=x-1;
    int ans=0;
    if(r%l)ans+=1;
    ans+=r/l;
    cout<<ans+k<<endl;
 
    }
}