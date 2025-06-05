class Solution {
public:
    string reverseVowels(string s) {
        vector<char>res;
        int n=s.size();
        vector<char>temp;
        for(int i=0;i<n;i++)
        {
            char c=s[i];
           if(c=='a'||c=='A')
           {
            temp.push_back(c);
            res.push_back(1);
           }
            else if(c=='e'||c=='E')
            {
            temp.push_back(c);
            res.push_back(1);
           }
            else if(c=='i'||c=='I')
           {
            temp.push_back(c);
            res.push_back(1);
           }
            else if(c=='o'||c=='O')
           {
            temp.push_back(c);
            res.push_back(1);
           }
            else if(c=='u'||c=='U')
           {
            temp.push_back(c);
            res.push_back(1);
           }
           else
            res.push_back(c);
        }
        vector<char>ans;
        int m=temp.size()-1;
        for(int i=0;i<n;i++)
        {
            if(res[i]==1){
            ans.push_back(temp[m]);
            m--;
            }
            else
            ans.push_back(res[i]);              
        }
        return string(ans.begin(),ans.end());
    }
};