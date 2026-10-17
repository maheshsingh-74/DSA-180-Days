/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: void pre(TreeNode* root, vector<int>& ans) {
        if (!root)
            return;
             pre(root->left, ans);
       pre(root->right, ans);
        ans.push_back(root->val);
       
    }
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> ans;
        pre(root,ans);
        return ans;
    }
};