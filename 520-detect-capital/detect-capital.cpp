class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        int n=word.size();
        for(auto i:word)
        {
            if(isupper(i))
            count++;
        }
        if(count==n) return true;
        if(count==0) return true;
        if(count==1&&isupper(word[0])) return true;
    return false;
    }
};