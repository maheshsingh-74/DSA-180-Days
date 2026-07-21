class Solution {
public: 
 vector<int>getleft( vector<int>&height,int n){
    vector<int>leftmax(n);
        leftmax[0]=height[0];
    for(int i=1;i<n;i++){
 leftmax[i]=max(height[i],leftmax[i-1]);
    }
    return leftmax;
 }
  vector<int>getright( vector<int>&height,int n){
 vector<int>rightmax(n);
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        return rightmax;
  }
    int trap(vector<int>& height) {
        int n= height.size();
        if (n == 0) return 0;
        vector<int>leftmax = getleft(height,n);
        vector<int>rightmax = getright(height,n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(leftmax[i],rightmax[i])-height[i];
        }
        return sum;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna