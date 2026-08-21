#include <vector>
#include <unordered_set>

class Solution {
public:
    int maxNumbers(int k, std::vector<int>& arr) {
        std::unordered_set<int> present(arr.begin(), arr.end());

        int count = 0;
        int current = 1;

        while (current <= k) {
            if (present.find(current) == present.end()) {
                k -= current;
                count++;
            }
            current++;
        }

        return count;
    }
};