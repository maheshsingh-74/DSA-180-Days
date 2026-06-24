
class Solution {
  public:
    void arrange(vector<long long>& arr) {
        //  code here
       vector<long long>temp;
       for(int i=0;i<arr.size();i++){
           temp.push_back(arr[i]);
       }
       for(int i=0;i<arr.size();i++){
           arr[i]=temp[temp[i]];
       }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna