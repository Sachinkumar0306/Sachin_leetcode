class Solution {
public:
    int findComplement(int num) {
        int i=0,res=0;
        while(num)
        {
            int ans=num&1;
            if(!ans)
            {
                res+=pow(2,i);
            }
            num=num>>1;
            i++;
        }
        return res;
    }
};