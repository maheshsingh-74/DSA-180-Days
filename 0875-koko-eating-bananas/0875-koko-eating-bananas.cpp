#include <vector>
#include <algorithm>

class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1;
        // The maximum speed Koko ever needs is the size of the largest pile
        int high = *std::max_element(piles.begin(), piles.end());
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canEatAll(piles, h, mid)) {
                ans = mid;        // mid is possible, record it
                high = mid - 1;   // look for a smaller speed
            } else {
                low = mid + 1;    // mid is too slow, look for a faster speed
            }
        }
        
        return ans;
    }

private:
    bool canEatAll(const std::vector<int>& piles, int h, int speed) {
        long long totalHours = 0; // Use long long to prevent potential overflow
        for (int pile : piles) {
            // Equivalent to ceil((double)pile / speed)
            totalHours += (pile + speed - 1) / speed;
        }
        return totalHours <= h;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna