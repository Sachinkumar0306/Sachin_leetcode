class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        ans.push_back(target);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==target)
            {
                return i;
            }
        }
        return 0;
    }
};