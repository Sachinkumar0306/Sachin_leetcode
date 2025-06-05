class Solution {
public:
    string reverseVowels(string s) {
        vector<char>res;
        int n=s.size();
        vector<char>temp;
        for(int i=0;i<n;i++)
        {
            char c=s[i];
           if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
           {
            res.push_back(1);
            temp.push_back(c);
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