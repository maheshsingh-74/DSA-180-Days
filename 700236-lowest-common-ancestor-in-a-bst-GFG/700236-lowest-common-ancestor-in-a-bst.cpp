/* Structure of a Binary Search Tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};
*/

class Solution {
	public:
	Node* findLCA(Node* root, Node* n1, Node* n2) {
		// code here
		if (!root)
			return nullptr;
		else if (root->data>n1->data && root->data > n2->data)
			return findLCA(root->left, n1, n2);
		else if (root->data<n1->data && root->data < n2->data)
			return findLCA(root->right, n1, n2);
		else
			return root;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna