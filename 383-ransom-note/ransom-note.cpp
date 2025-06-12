class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>m1;
       for(auto i:m)
       {
        m1[i]++;
       }
       for(auto i:r)
       {
        if(m1[i]==0)
        {
            return false;
        }
        else
        m1[i]--;
       }
       return true;
    }
};