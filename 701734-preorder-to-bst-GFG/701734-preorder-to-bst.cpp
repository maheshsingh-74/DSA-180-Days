/* Structure of a Tree Node
class Node {
	public:
	int data;
	Node *left, *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public: Node* bst(vector<int>&preorder, int &index, int lower, int upper) {
		if (index == preorder.size() || lower>preorder[index] || upper<preorder[index])
			return nullptr;
		Node *root = new Node(preorder[index++]);
		root->left = bst(preorder, index, lower, root->data);
		root->right = bst(preorder, index, root->data, upper);
		return root;
	}
	Node* preToBST(vector<int>& preorder) {
		// code here
		 int index=0;
        return bst(preorder, index, INT_MIN,INT_MAX);
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna