class Solution {
  public:
    int maxArea(vector<int> &height) {
        // CodeGenius
        int i = 0 , j  = height.size()-1;
        int ans=0;
        while(i<j){
            int length = j-i-1;
            int h = min(height[i],height[j]);
            
            int area = length * h;
            ans = max(ans,area);
            if(height[i]<height[j]) i++;
            else j--;
            
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna