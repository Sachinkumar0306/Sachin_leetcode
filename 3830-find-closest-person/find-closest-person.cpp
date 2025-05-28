class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(x==z&&y!=z) return 1;
        if(y==z&&x!=z) return 2;
        if(x==z) return 0;
        if(x==z) return 1;
        if(y==z) return 2;

      if(x<z&&y>z)
      {
        while(z!=0)
        {
            x=x+1;
             y=y-1;
            if(x==z&&x!=y) return 1;
            if(y==z&&y!=x) return 2;
            if(x==y) return 0;
        }
      }
       else if(x>z&&y<z)
      {
        while(z!=0)
        {
            x=x-1;
             y=y+1;
            if(x==z&&x!=y) return 1;
            if(y==z&&y!=x) return 2;
            if(x==y) return 0;

        }
      }
         else if(x<z&&y<z)
      {
        while(z!=0)
        {
             x=x+1;
             y=y+1;
            if(x==z&&x!=y) return 1;
            if(y==z&&y!=x) return 2;
            if(x==y) return 0;
        }
      }
       else
      {
        while(z!=0)
        {
             x=x-1;
             y=y-1;
            if(x==z&&x!=y) return 1;
            if(y==z&&y!=x) return 2;
            if(x==y) return 0;
        }

      } 
      return 0;
    }
};