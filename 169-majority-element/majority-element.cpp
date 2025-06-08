class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int temp=0;
        for(auto i:nums)
        {
            if(count==0)
            {
                temp=i;
            }
            count+=(i==temp)?1:-1;
        }
        return temp;
    }
};