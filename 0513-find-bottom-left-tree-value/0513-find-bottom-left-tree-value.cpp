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
    int maxdepth = 0;
    int bottomleft = 0;
    void dfs(TreeNode* root, int currdepth) {
        if (!root)
            return;
        if (currdepth > maxdepth) {
            maxdepth = currdepth;
            bottomleft = root->val;
        }
        dfs(root->left, currdepth + 1);
        dfs(root->right, currdepth + 1);
    }
    int findBottomLeftValue(TreeNode* root) {
      
      maxdepth=-1;  dfs(root, 0);
        return bottomleft;
    }
};