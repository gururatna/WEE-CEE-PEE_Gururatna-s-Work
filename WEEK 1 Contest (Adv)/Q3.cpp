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

     int n,m;
     cin>>n>>m;
    
    vector<char> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> b(n,0);
    for(int i=0;i<m;i++)
    {
        int l;cin>>l;
        if(l<n)b[l]++;
        
    }
    for(int i=0;i<n-1;i++)
    {
        b[i+1]+=b[i];
    }
    for(int i=0;i<n;i++)b[i]=m-b[i]+1;
    
    for(int i=0;i<26;i++)
    {char x='a';
        char a = x+i;
        int ctr=0;
        for(int j=0;j<n;j++)
        {
            if(v[j]==a)ctr+=b[j];
        }
  
        cout<<ctr<<" ";
    }
    cout<<endl;
}
}
