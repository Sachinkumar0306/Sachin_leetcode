class Solution {
public:
    int alternateDigitSum(int n) {
        int ans =0;
        int temp;
        vector<int>res;
        while(n!=0)
        {
            temp=n%10;
            res.push_back(temp);
            n=n/10;
        }
        reverse(res.begin(),res.end());
        int s=res.size();
        for(int i=0;i<s;i++)
        {
            if(i%2==0)
            {
                ans+=res[i];
            }
            else
            {
                ans-=res[i];
            }
        }
        return ans;
    }
};