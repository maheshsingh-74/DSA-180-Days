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
}; */

class Solution {
  public:
    Node* delNode(Node* root, int target) {
        // code here
        if (!root) return NULL;
if (root->data > target) {
root->left = delNode(root->left, target);
} else if (root->data < target) {
root->right = delNode(root->right, target);
} else {
// Found the node
if (!root->left && !root->right) return NULL;
if (!root->right) return root->left;
if (!root->left) return root->right;
// Node with two children
Node* child = root->left;
Node* parent = root;
while (child->right) {
parent = child;
child = child->right;
}
if (root != parent) {
parent->right = child->left;
child->left = root->left;
child->right = root->right;
delete root;
return child;
} else {
child->right = root->right;
delete root;
return child;
}
}
return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna