class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s=nums.size();
        vector<int>res;
        int ans1=0;
        int ans2=0;
        int result=0;
        for(int i=0;i<s;i++)
        {
            ans1=ans1+nums[i];
        }
        for(int i=0;i<s;i++)
        {
            int n=nums[i];
            while(n!=0)
            {
                ans2+=n%10;
                n=n/10;
            }
        }
        result=ans1-ans2;
        return result;
    }
};