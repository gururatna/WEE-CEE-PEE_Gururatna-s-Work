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

     int n,k;
     cin>>n>>k;
    
    vector<int> p(k);
    for(int i=0;i<2*k-n-1;i++)p[i]=i;
    int x=k-1;
    for(int i=2*k-n-1;i<k;i++){p[i]=x;x--;}
    for(auto e:p)cout<<e+1<<" ";
    
    cout<<endl;
}
}
