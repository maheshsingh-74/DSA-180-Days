class Solution {
public:int popcount(int x){
    int count=0;
    while(x!=0){
        x &=(x-1);
        count++;
    }
    return count;
}
    vector<int> countBits(int n) {
        vector<int>result(n+1);
        for(int i = 0; i <= n; ++i){
            result[i]=popcount(i);
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna