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
    TreeNode* deleteNode(TreeNode* root, int target) {
        if (!root)
            return nullptr;
        if (root->val > target) {
            root->left = deleteNode(root->left, target);
        } else if (root->val < target) {
            root->right = deleteNode(root->right, target);
        } else {
            if (!root->left && !root->right) {
                return nullptr;
            } else if (!root->left)
                return root->right;
            else if (!root->right)
                return root->left;
            else {
                TreeNode* child = root->left;
                TreeNode* parent = root;
                while (child->right) {
                    parent = child;
                    child = child->right;
                }
                if (root != parent) {
                    parent->right = child->left;
                    child->left = root->left;
                    child->right = root->right;
                    delete root;
                    return child;
                } else {
                    child->right = root->right;
                    delete root;
                    return child;
                }
            }
        }
            return root;
        

}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna