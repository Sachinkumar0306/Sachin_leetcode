class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>res;
        int index=0;
        int value=0;
        int m=mat.size();
        for(int i=0;i<m;i++)
        {
           int count=0;
            int n=mat[i].size();
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    count+=1;
                }
            }
                if(count>value)
                {
                    value=count;
                    index =i;
                }            
        }   
            res.push_back(index);
            res.push_back(value);
    return res;
    }
};