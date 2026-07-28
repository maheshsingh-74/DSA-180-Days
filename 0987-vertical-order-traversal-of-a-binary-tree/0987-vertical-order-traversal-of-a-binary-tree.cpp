class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;

        // map<col, map<row, multiset<val>>>
        // multiset automatically keeps nodes at the same (row, col) sorted ascending
        map<int, map<int, multiset<int>>> nodes;
        
        // queue holding {node, {col, row}}
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto p = q.front();
            q.pop();

            TreeNode* temp = p.first;
            int col = p.second.first;
            int row = p.second.second;

            nodes[col][row].insert(temp->val);

            if (temp->left) {
                q.push({temp->left, {col - 1, row + 1}});
            }
            if (temp->right) {
                q.push({temp->right, {col + 1, row + 1}});
            }
        }

        // Build result
        for (auto& [col, rowMap] : nodes) {
            vector<int> colVector;
            for (auto& [row, valSet] : rowMap) {
                colVector.insert(colVector.end(), valSet.begin(), valSet.end());
            }
            ans.push_back(colVector);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna