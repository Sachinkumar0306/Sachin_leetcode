class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        int prev=0,curr=1,curr2=1,next;
        for(int i=3;i<=n;i++)
        {
            next=prev+curr+curr2;
            prev=curr;
            curr=curr2;
            curr2=next;
        }
        return curr2;
    }
};