class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int leftmost = root->val;

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            leftmost = node->val;

            if (node->right) {
                q.push(node->right);
            }

            if (node->left) {
                q.push(node->left);
            }
        }

        return leftmost;
    }
};