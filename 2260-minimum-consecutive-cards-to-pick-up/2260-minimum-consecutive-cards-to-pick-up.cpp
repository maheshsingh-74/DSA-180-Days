class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> last;
        int result = INT_MAX;

        for (int i = 0; i < cards.size(); i++) {
            if (last.count(cards[i])) {
                result = min(result, i - last[cards[i]] + 1);
            }

            last[cards[i]] = i;
        }

        return result == INT_MAX ? -1 : result;
    }
};