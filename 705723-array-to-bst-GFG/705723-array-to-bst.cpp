/*
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
	public: Node* arraytobst(vector<int>&arr, int start, int end) {
		if (start>end)
			return nullptr;
		
		int mid = start + (end - start)/2;
		Node* root = new Node(arr[mid]);
		root->left = arraytobst(arr, start, mid - 1);
		root->right = arraytobst(arr, mid+1, end);
		return root;
	}
	Node* sortedArrayToBST(vector<int>& arr) {
		vector<int>ans;
		return arraytobst(arr, 0, arr.size() - 1);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna