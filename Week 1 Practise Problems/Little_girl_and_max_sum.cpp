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
    int n,q;int a,b;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<vector<int>>rel(n);
    vector<pair<int,int>>qu(q);
    vector<int> ans(n,0);
    int k=0;
    while(q--)
    {
        
        cin>>a>>b;
        a--;b--;
        
        qu[k].first=a;qu[k].second=b;
        if(a<=0 and b>=0)ans[0]++;
        rel[a].push_back(k);
        if(b<n-1)rel[b+1].push_back(k);
        k++;
    }
    for(int i=1;i<n;i++)
    {
        ans[i]=ans[i-1];
        for (auto e: rel[i])
        {
            if(qu[e].first==i)ans[i]++;
            if(qu[e].second==i-1)ans[i]--;
        }
    }
    sort(ans.begin(),ans.end());
    sort(v.begin(),v.end());
    int ct=0;
    for(int i=0;i<n;i++)ct+=ans[i]*v[i];
    cout<<ct<<endl;
 }
}