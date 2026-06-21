class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int a=0;int b=1;int best=0;
     set<char> c;//c.insert(s[a]);c.insert(s[b]);
     for( b =0;b<s.size();b++)   
     {
        if(c.contains(s[b]))
        {
            
            while(s[a]!=s[b]){c.erase(s[a]);a++;}
            a++;
        }
        else {c.insert(s[b]);best=max(best,b-a+1);}
        cout<<s[b]<<b-a+1;
     }
     
     return best;
    }
};