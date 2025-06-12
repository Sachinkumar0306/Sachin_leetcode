class Solution {
public:
static bool compare(string a,string b)
{
    return a+b>b+a;
}
    string largestNumber(vector<int>& nums) {
        vector<string>res;
        for(auto i:nums)
        {
            res.push_back(to_string(i));
        }
        sort(res.begin(),res.end(),compare);
        if(res[0]=="0")
        return "0";
        string ans="";
        for(auto s:res)
        {
            ans+=s;
        }
        return ans;
    }
};