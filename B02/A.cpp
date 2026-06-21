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
     
    int a,b,c,d,k;cin>>a>>b>>c>>d>>k;
    int l=0,r=0;
    if(a%c)l+=1;
    l+=a/c;
    if(b%d)r+=1;
    r+=b/d;
    if(l+r>k)cout<<-1;
    else cout<<l<<" "<<r;
    cout<<endl;
 
    }
}