class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev=0;
        while(n>0){
            int mod=n%10;
            rev=rev*10+mod;
            n/=10;
        }
        return rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna