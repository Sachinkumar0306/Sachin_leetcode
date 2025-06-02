class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>res;
        int n=num.size();
        int temp=k;
        for(int i=n-1;i>=0||temp>0;i--)
        {
            if(i>=0){
            temp=temp+num[i];
            }
            res.push_back(temp%10);
            temp=temp/10;
        }
        reverse(res.begin(),res.end());
        return res;     
    }
};