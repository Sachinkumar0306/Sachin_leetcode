class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(auto i:nums)
        {
            if(i==original)
            original*=2;
        }
        return original;
    }
};