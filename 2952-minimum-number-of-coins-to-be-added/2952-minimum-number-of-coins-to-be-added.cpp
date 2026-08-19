class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(), coins.end());
long long obtainable = 0;
int added = 0;
int i = 0;
int n = coins.size();

while (obtainable < target) {
if (i < n && coins[i] <= obtainable + 1) {
obtainable += coins[i];
i++;
} else {
// Add a new coin to bridge the gap
obtainable += (obtainable + 1);
added++;
}
}
return added;
    }
};