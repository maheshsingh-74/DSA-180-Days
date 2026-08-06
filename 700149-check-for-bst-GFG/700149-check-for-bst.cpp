/* Structure of a Binary Search Tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public: bool bst(Node *root, int &prev) {
		if (!root)
			return 1 ;
		bool l =bst(root->left, prev);
		if (l == 0)
			return 0;
		if (root->data <= prev)
			return 0;
		prev = root->data;
	return	bst(root->right, prev);
	}
	bool isBST(Node* root) {
		int prev = INT_MIN;
		return bst(root, prev);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna