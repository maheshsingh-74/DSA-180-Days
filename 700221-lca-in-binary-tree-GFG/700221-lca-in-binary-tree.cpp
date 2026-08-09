/* Structure of binary tree node
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
	public:
	Node* lca(Node* root, int p, int q) {
		//  code here
		if (root == NULL || root->data == p || root->data == q) {
			return root;
		}
			Node *left = lca(root->left, p, q);
			Node *right = lca(root->right, p, q);
			if (left != NULL && right != NULL) {
				return root;
			}
			return (left != NULL) ? left : right;

		}
	};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna