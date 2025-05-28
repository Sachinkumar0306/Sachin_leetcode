class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) {
        long long count=0;
        unordered_map<double,long long>m;
        int n=r.size();
        for(int i=0;i<n;i++)
        {
            m[(double)r[i][0]/r[i][1]]++;
        }
        for(auto i:m)
        {
            count+=((i.second-1)*(i.second)/2);
        }
        return count;
    }
};