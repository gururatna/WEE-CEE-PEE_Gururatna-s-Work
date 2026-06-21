#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;//cin>>t;
	while(t--)
	{int n,x,y;
	    cin>>n>>x>>y;
	int s1=0,s2=0,s3=0,s4=0;
	    for(int i=0;i<n;i++)
	    {int a,b;
	        cin>>a>>b;
	        int ans=abs(a-x)+abs(b-y);
	        int p=abs(a-x-1)+abs(b-y)+1;
	        int q=abs(a-x+1)+abs(b-y)+1;
	        int r=abs(a-x)+abs(b-y-1)+1;
	        int s=abs(a-x)+abs(b-y+1)+1;
	        if(p==ans)s1++;
	        if(q==ans)s2++;
	        if(r==ans)s3++;
	        if(s==ans)s4++;
	        
	    }
	    
	    int mx=max(max(s1,s2),max(s3,s4));
	    cout<<mx<<endl;
	    if(mx==s1)cout<<x+1<<" "<<y<<endl;
	    else if(mx==s2)cout<<x-1<<" "<<y<<endl;
	    else if(mx==s3)cout<<x<<" "<<y+1<<endl;
	    else if(mx==s4)cout<<x<<" "<<y-1<<endl;
	    
	    
	}

}
