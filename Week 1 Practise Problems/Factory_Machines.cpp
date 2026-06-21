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
     sort(v.begin(),v.end());int b;int ct;
     if(m%v[0]) b=m*v[0]+1;
     else b=m*v[0];int mid;
     int a =0;bool found=false;
        while (a<b-1)
        {   
             mid=a+b;mid/=2;
            int sum=0;
            for(auto e: v)sum+=mid/e;
            if(sum>=m)b=mid;
            else a=mid;
           
        }
        
mid=a;
int sum=0;
            for(auto e: v)sum+=mid/e;
            if(sum>=m)ct=a;
            else ct=b;
           
  
    cout<<ct<<endl;
}
