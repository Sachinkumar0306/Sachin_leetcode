class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int>map;
       for(int i=0;i<arr.size();i++)
       {
        map[arr[i]]++;
       }
       int max=0;
       int ans=0;
       for(auto i:map)
       {
        if(i.first==i.second)
        {
            if(max<i.second)
            {
            max=i.second;
            ans=i.first;
            }
        }
       }
       if(ans!=0)
       {
        return ans;
       }
       return -1;

    }
};