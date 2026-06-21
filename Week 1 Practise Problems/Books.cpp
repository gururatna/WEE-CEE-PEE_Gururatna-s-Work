#include <bits/stdc++.h>
using namespace std;


#define int long long
#define inf 1e18
#define ninf -1e18

signed main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 int t=1;
 while(t--)
 {
     int n,t;
     cin >>n>>t;
     vector<int> v(n);
     for (int i=0;i<n;i++)cin>>v[i];
    int last=0;
     int ans=0;
     vector<int> ps(n,0);
     for(int j =0;j<n;j++)
     {if(j) ps[j]=ps[j-1]-v[j-1];
     for (int i=last;i<n;i++)
     {
     if(ps[j]+v[i]<=t)
     {ps[j]+=v[i];last=i+1;ans=max(ans,last-j);}
     else {break;}
     }
 }
     cout<<ans<<endl;
 }
}