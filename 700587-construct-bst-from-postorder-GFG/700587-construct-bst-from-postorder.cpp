/* Structure of tree node
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
}; */

class Solution {
  public:  Node* bst(vector<int>&postorder, int &index, int lower, int upper) {
		if (index <0 || lower>postorder[index] || upper<postorder[index])
			return nullptr;
		Node *root = new Node(postorder[index--]);
		root->right = bst(postorder, index, root->data, upper);

		root->left = bst(postorder, index, lower, root->data);
		return root;
	}
    Node* constructTree(vector<int>& postorder){
        int index= postorder.size()-1;
        return bst(postorder,index,INT_MIN,INT_MAX);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna