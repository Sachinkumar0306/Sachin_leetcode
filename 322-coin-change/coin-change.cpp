class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        vector<int>dp(amt+1,amt+1);
        dp[0]=0;
        for(int i=1;i<=amt;i++)
        {
            for(auto j:coins)
            {
                if(i-j>=0)
                {
                    dp[i]=min(dp[i],dp[i-j]+1);
                }
            }
        }
        return dp[amt]>amt?-1:dp[amt];
    }
};