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

     int a,b;
     cin>>a>>b;
    int ct=1;
    int hr=0;
    if(ct>=a){cout<<0<<endl;continue;}
    while(ct<=b)
    {
        ct*=2;hr++;
        if(ct>=a)break;
        
        
    }
    int x=a-ct;
    int j;
    if(x%b)j=x/b+1;
    else j=x/b;
   if(ct<a) hr+=j;
        cout<<hr<<endl;
}
}
