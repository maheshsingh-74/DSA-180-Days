class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int result = INT_MAX;
        int l = 0;
        int n = cards.size();
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            while (st.contains(cards[i])) {
                st.erase(cards[l]);
                l++;
             result = min(result, (int)st.size() + 2);
            }
            st.insert(cards[i]);
           
        }
        if (result == INT_MAX)
            return -1;
        return result;
    }
};