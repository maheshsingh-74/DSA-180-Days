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
public: bool bst(TreeNode *root,long long int &prev) {
		if (!root)
			return 1 ;
		bool l =bst(root->left, prev);
		if (l == 0)
			return 0;
		if (root->val <= prev)
			return 0;
		prev = root->val;
	return	bst(root->right, prev);
}
    bool isValidBST(TreeNode* root) {
       long long int prev= LLONG_MIN;
        return bst(root, prev);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna