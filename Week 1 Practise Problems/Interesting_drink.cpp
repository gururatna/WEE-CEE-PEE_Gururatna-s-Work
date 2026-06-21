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
     int n;
     cin >>n;
     vector<int> v(n);
     for (int i=0;i<n;i++)cin>>v[i];
     sort(v.begin(),v.end());
     int q;
     int qw=q;
     cin>>q;
     while(q--)
     {
         int target;
         cin>>target;
         int a=0;int b=n-1;int mid;
         while(a<b-1)
         {
             mid=(a+b)/2;
             if(v[mid]>target)b=mid;
             else a=mid;
         }
         if(target<v[0])a=-1;
         if (target >=v[n-1])a=n-1;
         cout<<a+1<<endl;
     }
     
 }
}