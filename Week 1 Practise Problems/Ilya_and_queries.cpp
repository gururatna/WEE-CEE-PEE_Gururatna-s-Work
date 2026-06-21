#include <bits/stdc++.h>
using namespace std;


#define int long long
#define inf 1e18
#define ninf -1e18

signed main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 int t=1;//cin>>t;
 while(t--)
 {
    string s;
    cin>>s;
    int n=s.size();
    vector<int> v(s.size()-1,0);
    for(int i=0;i<n-1;i++)
    
    {
        if(s[i]==s[i+1])v[i]=1;
    }
    vector<int> pr(n,0);
    for(int i=1;i<n;i++)
    {
     pr[i]=pr[i-1] +v[i-1];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;cin>>a>>b;
        cout<<pr[b-1]-pr[a-1]<<endl;
    }
 }
}