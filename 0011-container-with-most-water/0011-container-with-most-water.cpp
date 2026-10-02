class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int l=0;
        int r=n-1;
        int mw=0;
        while(l<r){
            int w=r-l;
          int min_h=min(height[l],height[r]);
          int area= w*min_h;
          mw=max(mw,area);
          if(height[l]<height[r])l++;
          else r--;

        }
        return mw;
    }
};