/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
   void solve(Node* root, vector<int>& result) {
        if (root == NULL) return;
        
        solve(root->left, result);       
        result.push_back(root->data);   
        solve(root->right, result); 
    }

public:
    vector<int> inOrder(Node* root) {
        vector<int> result;
        solve(root, result);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna