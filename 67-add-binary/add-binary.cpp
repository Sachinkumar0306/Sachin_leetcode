class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int count=0;
        int m=a.size()-1;
        int n=b.size()-1;
        while(m>=0||n>=0||count)
        {
            int sum=count;
            if(m>=0)
            {
                sum+=a[m]-'0';
                m--;
            }
            if(n>=0)
            {
                sum+=b[n]-'0';
                n--;
            }
            res+=(sum%2)+'0';
            count=sum/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};