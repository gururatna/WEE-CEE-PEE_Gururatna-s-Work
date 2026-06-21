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
       
       int n; cin >> n;
     int l,r;cin>>l>>r;
     vector<int> v(n);
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
             
        }
        int ans=0;
        sort(v.begin(),v.end());
        int x=0;
        int a=n-1,b=n-1;
        for(auto e:v)
        {
            if(e+e>=l and e+e<=r)ans--;
        }
        
        while(x<n and b>-1)
        {
            int first=v[x];
            while(v[x]+v[b]>r){b--;
            if(b<0)break;}
        bool flag=false;
        while( a>-1 and v[x]+v[a]>=l ){a--;flag=true;}
        if(flag){
        if(a==-1)a=0;
        else a++;}
        if(flag)
        {//cout<<v[x]<<v[a]<<v[b]<<"*";
        ans+=b-a+1;}
        x++;
            
        }
        
 cout<<ans/2<<endl; 
    }
}