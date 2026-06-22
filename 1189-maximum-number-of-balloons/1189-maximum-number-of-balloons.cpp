class Solution {
public:
    int maxNumberOfBalloons(string text) {
     
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int counts[26] = {0};
        
        for (char c : text) {
            counts[c - 'a']++;
        }
        
        int b_count = counts['b' - 'a'];
        int a_count = counts['a' - 'a'];
        int l_count = counts['l' - 'a'] / 2;  
        int o_count = counts['o' - 'a'] / 2; 
        int n_count = counts['n' - 'a'];
        
     
        return min({b_count, a_count, l_count, o_count, n_count});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna