class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            ans.push_back(1);
            if(s[i]=='V')
             ans.push_back(5);
            if(s[i]=='X')
            ans.push_back(10);
            if(s[i]=='L')
            ans.push_back(50);
            if(s[i]=='C')
             ans.push_back(100);
            if(s[i]=='D')
             ans.push_back(500);
            if(s[i]=='M')
             ans.push_back(1000);
        }
        int res=0;
        int res2=0;
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(ans[i]>=ans[i+1])
            {
            res+=ans[i];
            count++;
            }
           else if(ans[i]<ans[i+1])
            {
                res2=ans[i+1]-ans[i];
                res+=res2;
                i++;
                count=count+2;
            }
        }
        if(count!=n)
        res+=ans[n-1];
        return res;
    }
};