class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if((m*n)!=(r*c))
        return mat;
        vector<vector<int>>reshape;
        int row=0;
        vector<int>res;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row==0)
                {
                    res.clear();
                }
                res.push_back(mat[i][j]);
                row++;
                if(c==row)
                {
                    reshape.push_back(res);
                    row=0;
                }
            }
        }
        return reshape;
    }
};