#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    struct Item {
        int value;
        int weight;
        double ratio;
    };

    // Comparator function to sort items by ratio in descending order
    static bool compare(const Item& a, const Item& b) {
        return a.ratio > b.ratio;
    }

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<Item> items(n);

        // 1. Combine value, weight, and ratio into a single structure
        for (int i = 0; i < n; i++) {
            items[i].value = val[i];
            items[i].weight = wt[i];
            items[i].ratio = (double)val[i] / wt[i];
        }

        // 2. Sort items by ratio in descending order
        sort(items.begin(), items.end(), compare);

        double totalValue = 0.0;
        int currentCapacity = capacity;

        // 3. Process items greedily
        for (int i = 0; i < n; i++) {
            if (currentCapacity == 0) break;

            if (items[i].weight <= currentCapacity) {
                // Take full item
                totalValue += items[i].value;
                currentCapacity -= items[i].weight;
            } else {
                // Take fraction of the item
                totalValue += items[i].ratio * currentCapacity;
                currentCapacity = 0; // Knapsack is full
            }
        }

        return totalValue;
    }
};