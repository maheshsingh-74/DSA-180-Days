class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        stack<TreeNode*> s1, s2;
        TreeNode *r1 = root1, *r2 = root2;

        while (r1 || r2 || !s1.empty() || !s2.empty()) {
            while (r1) {
                s1.push(r1);
                r1 = r1->left;
            }
            while (r2) {
                s2.push(r2);
                r2 = r2->left;
            }

            if (s2.empty() || (!s1.empty() && s1.top()->val <= s2.top()->val)) {
                ans.push_back(s1.top()->val);
                r1 = s1.top()->right;
                s1.pop();
            } else {
                ans.push_back(s2.top()->val);
                r2 = s2.top()->right;
                s2.pop();
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna