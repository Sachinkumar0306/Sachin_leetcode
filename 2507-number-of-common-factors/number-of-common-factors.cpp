class Solution {
public:
    int commonFactors(int a, int b) {
        int count=0;
        int temp=__gcd(a,b);
        for(int i=1;i<=temp;i++)
        {
            if(temp%i==0)
            {
                count++;
            }
        }
        return count;
    }
};