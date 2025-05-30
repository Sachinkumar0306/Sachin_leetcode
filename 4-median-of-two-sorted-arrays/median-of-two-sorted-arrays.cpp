class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(auto i:nums1)
        {
            res.push_back(i);
        }
        for(auto i:nums2)
        {
            res.push_back(i);
        }
        sort(res.begin(),res.end());
        int n=res.size();
        return n%2?res[n/2]:(res[n/2-1]+res[n/2])/2.0;
    }
};