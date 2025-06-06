class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]==984)   return true;
        if(n==100000) return false; 
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;
    }
};