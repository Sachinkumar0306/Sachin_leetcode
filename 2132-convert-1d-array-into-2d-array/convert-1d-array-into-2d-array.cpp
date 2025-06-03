class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        vector<vector<int>>res;
        int s=original.size();
        if(s!=m*n)
        {
            return res;
        }

        int count=0;
        for(int i=0;i<m;i++)
        {
            vector<int>row;
            for(int j=0;j<n;j++)
            {
                row.push_back(original[count]);
                count++;
            }
            res.push_back(row);
        }
        return res;
    }
};