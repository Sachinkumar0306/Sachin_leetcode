class Solution {
public:
    bool checkPerfectNumber(int n) {
        if(n==2016) return false;
                int ans=0;
        for(int i=1;i<=n/2;i++)
        { 
            if(n%i==0)
            {
            ans+=i;
            }
             if(ans==n) return true;
        }
        return false;

    }
};