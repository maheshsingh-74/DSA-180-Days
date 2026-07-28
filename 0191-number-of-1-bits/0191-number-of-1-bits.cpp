class Solution {
public:
    int hammingWeight(int n) {
        int res=0;
        while(n){
            if(n%2!=0) res++;
            n/=2;

        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna