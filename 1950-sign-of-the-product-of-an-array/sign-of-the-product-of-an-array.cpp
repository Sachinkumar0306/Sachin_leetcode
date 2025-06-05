class Solution {
public:
    int arraySign(vector<int>& nums) {
       int n=nums.size();
       int ans=1;
       for(int i=0;i<n;i++)
       {
        ans=ans*nums[i];
        if(ans>0) ans= 1;
        if(ans<0) ans =-1;
       }
       if(ans==0) return 0;
       if(ans>0) return 1;
      return -1;
    }
};