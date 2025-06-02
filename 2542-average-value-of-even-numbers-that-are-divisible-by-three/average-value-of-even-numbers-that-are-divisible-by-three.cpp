class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%3==0)
            {
                res.push_back(nums[i]);
            }         
        }
        int s=res.size();
        int ans=0;
        int count=0;
        for(int i=0;i<s;i++)
        {
            if(res[i]%2==0)
            {
                ans=ans+res[i];
                count++;
            }
        }
        if(count==0) return 0;
        int result=ans/count;
        return result;

    }
};