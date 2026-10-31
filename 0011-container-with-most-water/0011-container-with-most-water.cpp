class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j=n-1;
        int minh=min(height[i],height[j]);
          int mw=(j-i)*minh;
        
        while(i<j){
            if(height[i]<height[j])i++;
            else j--;
             minh=min(height[i],height[j]);
             mw=max(mw, minh*(j-i));

        }
        return mw;
    }
};