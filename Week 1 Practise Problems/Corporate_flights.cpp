class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        vector<vector<int>> relevant(n);
        int i=0;
        for(auto e: bookings)
        {
            relevant[e[0]-1].push_back(i);
            if(e[1]<n) relevant[e[1]].push_back(i);
            i++;
        }
        for(int i=0;i<n;i++)
        {
            int b=i+1;
            if(b==1)
            {
                for (auto e : bookings)
                {
                    if(e[0]==1)ans[0]+=e[2];
                }
            }
            else
            {
                ans[i]=ans[i-1];
                for (auto num:relevant[i])
                {   vector <int> e=bookings[num];
                    if(e[0]==b)ans[i]+=e[2];
                    if(e[1]==b-1)ans[i]-=e[2];
                }
            }

        }
        return ans;
    }
};