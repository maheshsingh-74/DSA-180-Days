/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int l, int h) {
      //  int sum = 0;

        if (!root)
            return 0;
        else if (root->val > l && root->val > h)
            return rangeSumBST(root->left, l, h);
        else if (root->val < l && root->val < h)
            return rangeSumBST(root->right, l, h);
        else {
            return +root->val + rangeSumBST(root->left, l, h) +
                   rangeSumBST(root->right, l, h);
        }
       
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna