#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
private:
    // Cross product of vector (p1 -> p2) and (p1 -> p3)
    // > 0: Counter-clockwise turn
    // < 0: Clockwise turn
    // = 0: Collinear points
    int crossProduct(const vector<int>& p1, const vector<int>& p2, const vector<int>& p3) {
        return (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p2[1] - p1[1]) * (p3[0] - p1[0]);
    }

public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        int n = trees.size();
        if (n <= 3) return trees;

        // Step 1: Sort points lexicographically by x-coordinate (and y-coordinate on ties)
        sort(trees.begin(), trees.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
        });

        vector<vector<int>> lower;
        vector<vector<int>> upper;

        for (auto &point : trees) {
            while (lower.size() >= 2 && crossProduct(lower[lower.size() - 2], lower.back(), point) < 0) {
                lower.pop_back();
            }
            lower.push_back(point);

            while (upper.size() >= 2 && crossProduct(upper[upper.size() - 2], upper.back(), point) > 0) {
                upper.pop_back();
            }
            upper.push_back(point);
        }

        set<vector<int>> unique_trees;
        for (const auto& p : lower) unique_trees.insert(p);
        for (const auto& p : upper) unique_trees.insert(p);

        return vector<vector<int>>(unique_trees.begin(), unique_trees.end());
    }
};