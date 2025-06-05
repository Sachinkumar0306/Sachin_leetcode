class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>res;
        for(int i=0;i<m;i++)
        {
            int row=matrix[i][0];
            int col=0;
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]<row)
                {
                    row=matrix[i][j];
                    col=j;
                }
            }
            bool ans=1;
            for(int k=0;k<m;k++)
            {
                if(matrix[k][col]>row)
                {
                    ans=0;
                    break;
                }

            }
            if(ans)
            {
                res.push_back(row);
            }
        }
        return res;  
    }
};