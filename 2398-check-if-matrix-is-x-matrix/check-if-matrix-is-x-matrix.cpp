class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int val=0;
        int val2=0;
        for(int i=0;i<n;i++)
        {
            val=grid[i][i];  
            if(val==0) return false;
            else val2++;
            val=grid[i][n-1-i];
            if(val==0) return false;
            else val2++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                count++;
            }
        }
        if(n%2==0)
        {
            int temp1=m*n;
            if(count==temp1-val2)
            return true;
        }
        else
        {
            int temp=m*n;
            if(temp-(val2-1)==count)
            return true;
        }
        return false;
    }
};