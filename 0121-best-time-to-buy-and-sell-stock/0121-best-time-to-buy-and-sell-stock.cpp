class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n= prices.size();
     int minprice=prices[0];
     int profit=0;
     for(int i=0;i<n;i++){
        if(prices[i]<minprice) minprice=prices[i];
        profit=max(profit,prices[i]-minprice);
     }
     return profit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna