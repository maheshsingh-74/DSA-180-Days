class Solution {
  public:
        bool canEatAll(const vector<int>& piles, int h, int k) {
    long long hoursNeeded = 0;
    for (int pile : piles) {
        
        hoursNeeded += (pile + k - 1) / k;
    }
    return hoursNeeded <= h;
}

    int kokoEat(vector<int>& piles, int h) {
    int left = 1;
    int right = 0;
    for (int pile : piles) {
        if (pile > right) right = pile;
    }

    int result = right;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (canEatAll(piles, h, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna