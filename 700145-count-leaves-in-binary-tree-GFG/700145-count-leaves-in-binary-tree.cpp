/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    int countLeaves(Node* root) {
        if (root == NULL) {
            return 0;
        }
                if (root->left == NULL && root->right == NULL) {
            return 1;
        }
        
        return countLeaves(root->left) + countLeaves(root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna