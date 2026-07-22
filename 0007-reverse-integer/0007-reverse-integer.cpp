class Solution {
public:
    int reverse(int n) {
        long long int rev=0;

        while(n!=0){
            int mod=n%10;
                    if(rev*10<INT_MAX && rev*10>INT_MIN) {

            rev=rev*10+mod;
            n/=10;
                    }
                    else {
                      return 0;
                    }
        }
        return rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna