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
     sort(v.begin(),v.end());
     int a =0;int b=n-1;int ct=0;
        while (a<b)
        {   
            if (v[b]+v[a]>m){b--;ct++;}
            else {b--;a++;ct++;}
          
        }
        if(a==b and v[a]<=m)ct++;
 
    cout<<ct<<endl;
}
