class Solution {
  public:
    int replaceBit(int n, int k) {
       int totalBits = log2(n) + 1;
        
        int pos = totalBits - k;
        
        if (pos < 0) return n;
        
        return n & (~(1 << pos));
    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna