class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++)
       {
        m[nums[i]]++;
       } 
       vector<int>res;
       for(auto i:m)
       {
        if(i.second==1)
        {
            res.push_back(i.first);
        }
       }
       return res;
    }
};