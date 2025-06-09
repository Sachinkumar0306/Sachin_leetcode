class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pc=0;
        int nc=0;
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            if(nums[i]>0)
            pc++;
            else if(nums[i]<0)
            nc++;
        }
        return max(pc,nc);
    }
};