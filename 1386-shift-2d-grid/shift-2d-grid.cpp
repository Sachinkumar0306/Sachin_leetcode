class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>>res=grid;
        int m=grid.size();
        int n=grid[0].size();
        while(k!=0)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n-1;j++)
                {
                    grid[i][j+1]=res[i][j];
                }
            }
            for(int i=0;i<m-1;i++)
            {
                grid[i+1][0]=res[i][n-1];
            }
            grid[0][0]=res[m-1][n-1];
            res=grid;
            k=k-1;
        }
        return grid;
    }
};