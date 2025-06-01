class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count =0;
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            res.push_back(nums[i]);
        }
        sort(res.begin(),res.end());
       if(nums[n-1]<res[n-1])
       {
        for(int i=0;i<n;i++)
        {
            if(res[i]==nums[(n-1)-i]);
            else 
            return false;                         
        }
       }
        if(nums[n-1]==res[n-1])
       {
        for(int i=0;i<n;i++)
        {
            if(res[i]==nums[i]);
            else 
            return false;                         
        }
       }
       return true;
    }
};