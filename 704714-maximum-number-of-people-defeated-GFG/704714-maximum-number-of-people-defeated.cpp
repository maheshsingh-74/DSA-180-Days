
class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int strength=0;
        int count=0;
        for(long long i=1;i<sqrt(p);i++){
            strength+=i*i;
            if(p-strength>=0) count++;
            else break;
        }
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna