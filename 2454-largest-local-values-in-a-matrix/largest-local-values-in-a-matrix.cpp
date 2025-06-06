class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> res;
        for (int i = 0; i < n - 2; i++) 
        {
            vector<int> row;
            for (int j = 0; j < n - 2; j++) 
            {
                int max = 0;
                for (int x = i; x < i + 3; x++) 
                {
                    for (int y = j; y < j + 3; y++) 
                    {
                        if(grid[x][y]>max)
                        max=grid[x][y];
                    }
                }
                row.push_back(max); 
            }
            res.push_back(row); 
        }
        return res;
    }
};
