class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        if(p[0]==p[1]||p[0]==p[2]||p[1]==p[2]) 
        return false;
        int x1,x2,x3;
        int y1,y2,y3;
        x1=p[0][0];
        y1=p[0][1];
        x2=p[1][0];
        y2=p[1][1]; 
        x3=p[2][0];
        y3=p[2][1]; 
        int area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
        return area!=0;
    }
};