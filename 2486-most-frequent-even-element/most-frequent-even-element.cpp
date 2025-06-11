class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            m[nums[i]]++;
        }
        int max=0;
        int value=-1;
        for(auto [key,val]:m)
        {
            if(val>max||(val==max&&key<value))
            {
                max=val;
                value=key;
            }
        }
        return value;
    }
};