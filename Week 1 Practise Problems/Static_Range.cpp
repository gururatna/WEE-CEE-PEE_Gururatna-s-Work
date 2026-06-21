#include <bits/stdc++.h>
using namespace std;
 
 
#define int long long
#define inf 1e18
#define ninf -1e18
 
signed main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
       
       int m,n,k; cin >>n>> m;
     
     vector<int> v(n);
     
     for(int i=0;i<n;i++)cin>>v[i];
     vector<int> pr(n,v[0]);
     for(int i=1;i<n;i++)pr[i]=pr[i-1]+v[i];
     
     while(m--)
     {int a,b;cin>>a>>b;
        if(a==1)cout<<pr[b-1]<<endl;
        else cout<<pr[b-1]-pr[a-2]<<endl;
     }
}