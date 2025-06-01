class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int count =0;
        int res=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                res=arr[i+1];
            }
            else
            {
                count =i;
                break;
            }
        }
        if(res==0) return false;
        for(int j=count;j<n-1;j++)
        {
            if(arr[j]<=arr[j+1]) return false;
        }
        return true;
    }
};