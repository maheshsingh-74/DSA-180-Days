
class Solution {
  public:
    void arrange(vector<long long>& arr) {
       int n=arr.size();
       for(int i=0;i<n;i++){
           long long x=arr[i];
           long long y=arr[x];
           arr[i]=(y%n)*n+x;
       }
       for(int i=0;i<n;i++){
           arr[i]/=n;
       }
       
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna