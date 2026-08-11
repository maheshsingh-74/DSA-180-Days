/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
private:
    void solve(Node* root, vector<int>& result) {
        if (root == nullptr) return;
        
        solve(root->left, result);       
        solve(root->right, result);   
        result.push_back(root->data);  
    }

public:
    vector<int> postOrder(Node* root) {
        vector<int> result;
        solve(root, result);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna