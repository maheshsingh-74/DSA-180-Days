class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string res="";
        while(n){
           
            int rem = n % 2;
            res.push_back(rem + '0'); 
            n /= 2; 
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna