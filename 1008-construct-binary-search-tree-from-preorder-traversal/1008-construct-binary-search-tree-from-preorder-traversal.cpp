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
public: TreeNode* bst(vector<int>&preorder, int &index, int lower , int upper){
 if(index==preorder.size()||lower>preorder[index]||upper<preorder[index]) return nullptr;
 TreeNode *root= new TreeNode(preorder[index++]);
 root->left=bst(preorder,index,lower,root->val);
 root->right=bst(preorder,index,root->val,upper);
 return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        return bst(preorder, index, INT_MIN,INT_MAX);

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna