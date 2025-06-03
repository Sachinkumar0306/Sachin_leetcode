class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int count=1;
           if(i-k>=0&&nums[i]<=nums[i-k])
           {
            count=count-1;
           }
           if(i+k<n&&nums[i]<=nums[i+k])
           {
            count=count-1;
           }
           if(count!=0&&count>=0)
           {
            ans=ans+nums[i];
           }
        }
        return ans;
    }
};