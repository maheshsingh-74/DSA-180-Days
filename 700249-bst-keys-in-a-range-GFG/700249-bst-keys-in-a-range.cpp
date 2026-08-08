/* Structure of tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
private:
    void helper(Node* root, int low, int high, vector<int>& ans) {
        if (!root) return;

        if (root->data > high) {
            helper(root->left, low, high, ans);
        } 
        else if (root->data < low) {
            helper(root->right, low, high, ans);
        } 
        else {
            helper(root->left, low, high, ans);
            ans.push_back(root->data);
            helper(root->right, low, high, ans);
        }
    }

public:
    vector<int> nodesInRange(Node *root, int low, int high) {
        vector<int> ans;
        helper(root, low, high, ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna