class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int s=nums.size();
        vector<int>res;
        res.push_back(nums[0]);
        for(int i=1;i<s;i++)
        {
            if(nums[i]!=nums[i-1]) 
            res.push_back(nums[i]);
        }
        nums=res;
        return res.size();
    }
};