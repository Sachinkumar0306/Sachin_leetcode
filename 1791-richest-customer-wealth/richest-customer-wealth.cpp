class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int ans=0;
            int s=accounts[i].size();
            for(int j=0;j<s;j++)
            {
                ans=ans+accounts[i][j];
            }
            res.push_back(ans);
        }
        sort(res.begin(),res.end());
        return res[n-1];
    }
};