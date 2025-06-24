class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        sort(ans.begin(),ans.end());
        int t=ans[n-1];
        for(int i=0;i<n;i++)
        {
            if(nums[i]==t)
            return i;
        }
        return 0;
    }
};