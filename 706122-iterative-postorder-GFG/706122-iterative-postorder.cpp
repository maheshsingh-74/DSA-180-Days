/* Tree Node
struct Node {
	int data;
	Node* left;
	Node* right;
}; */
class Solution {
	public:
	vector<int> postOrder(Node* root) {
		// code here
		vector<int>ans;
		stack<Node*>st;
		st.push(root);
		while (!st.empty()) {
			Node*temp = st.top();
			st.pop();
			ans.push_back(temp->data);
			if (temp->left)
				st.push(temp->left);
			if (temp->right)
				st.push(temp->right);
			
		}
		reverse(ans.begin(), ans.end());
		
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna