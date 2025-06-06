class Solution {
public:
    string convertToTitle(int c) {
        string s="";
        while(c>0)
        {
            c--;
            int rem=c%26;
            char letter='A'+rem;
            s=letter+s;
            c=c/26;
        }
        return s;
    }
};