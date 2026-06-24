class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
       vector<int>ans;
       for(int i=0;i<arr.size();i++){
           int index=abs(arr[i]);
           if(arr[index]>0) arr[index]*=-1;
           else ans.push_back(abs(arr[i]));
       }
       return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna