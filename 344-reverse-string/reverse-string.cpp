class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int n=s.size();
        int j=0;
        for(int i=n-1;i>=0;i--)
        {
            if(j<i)
            {
            swap(s[j],s[i]);
            j++;
            }
        }
    }
};