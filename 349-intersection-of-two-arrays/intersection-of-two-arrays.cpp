class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        vector<int>res;
        int count=0;
        for(int i=0;i<s1;i++)
        {
            for(int j=0;j<s2;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(find(res.begin(),res.end(),nums1[i])!=res.end())
                    {
                        count++;
                    }
                    else
                    res.push_back(nums1[i]);
                    
                }
            }
        }
        return res;
    }
};