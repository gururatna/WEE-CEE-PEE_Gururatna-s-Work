#include <bits/stdc++.h>
using namespace std;
 
 
#define int long long
#define inf 1e18
#define ninf -1e18
 
signed main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
       
       int m,n,k; cin >>n>> m>>k;
     
     vector<int> v(n);
     vector<int>v2(m);
     for(int i=0;i<n;i++)cin>>v[i];
          for(int i=0;i<m;i++)cin>>v2[i];
     sort(v.begin(),v.end());
     sort(v2.begin(),v2.end());int a=0;int b=0;int ct=0;
        while (a<n and b<m)
        {
            if (v2[b]<v[a]-k)b++;
            else if(abs(v2[b]-v[a])<=k){b++;a++;ct++;}
            else a++;
        }
 
    cout<<ct<<endl;
    }