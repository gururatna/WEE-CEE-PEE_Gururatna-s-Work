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

     int a,b,c;
     cin>>a>>b>>c;
     //int n; cin >> n;

  if(abs(a-b)==1){cout<<-1<<endl;continue;}
       
        int j=abs(a-b);
        if(2*j<a || 2*j<b || 2*j<c){cout<<-1<<endl;continue;}
        else cout<<(c+j-1)%(2*j)+1;
        cout<<endl;
}
}
