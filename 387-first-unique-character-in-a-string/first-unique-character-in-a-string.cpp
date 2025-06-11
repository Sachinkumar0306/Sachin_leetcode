class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        int n=s.size();
        for(auto i:s)
        {
            m[i]++;
        }
        vector<char>res;
        for(auto i:m)
        {
            if(i.second==1)
            {
            res.push_back(i.first);
            }
        }
        int n2=res.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(s[i]==res[j])
                return i;
            }       
        }
        return -1;
    }
};