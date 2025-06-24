class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
                break;
            }
        }
        if(ans.size()==2)
        {
            return ans;
        }
        return {-1,-1};
    }
};