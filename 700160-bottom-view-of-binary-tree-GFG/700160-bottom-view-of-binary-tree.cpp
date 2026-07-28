/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public: void find(Node *root, int pos, int &l, int &r) {
		if (!root)
			return ;
		l = min(l, pos);
		r = max(r, pos);
		if (root->left)
			find(root->left, pos - 1, l, r);
		if (root->right) find(root->right, pos + 1, l, r);
		}
	vector<int> bottomView(Node *root) {
		// code here
		int l = 0, r = 0;
		find(root, 0, l, r);
		vector<int>ans(r - l + 1);
		queue<Node*>q;
		queue<int>idx;
		q.push(root);
		idx.push(-l);
		while (!q.empty()) {
			Node*temp = q.front();
			q.pop();
			int pos = idx.front();
			idx.pop();
			ans[pos] = temp->data;
			if (temp->left) {
				q.push(temp->left);
				idx.push(pos - 1);
			}
			if (temp->right) {
				q.push(temp->right);
				idx.push(pos + 1);
			}
		}
	
	return ans;
}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna