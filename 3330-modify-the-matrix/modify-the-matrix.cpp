class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>res;
        for(int j=0;j<n;j++)
        {
            int max=0;
            for(int i=0;i<m;i++)
            {
                if(matrix[i][j]>max)
                max=matrix[i][j];
            }
            res.push_back(max);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=res[j];
                }
            }
        }
        return matrix;
    }
};