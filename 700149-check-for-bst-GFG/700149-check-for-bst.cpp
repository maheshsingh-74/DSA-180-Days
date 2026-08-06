/* Structure of a Binary Search Tree node
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
  public: void inorder(Node *root, vector<int>&ans){
      if(!root) return;
      inorder(root->left, ans);
      ans.push_back(root->data);
      inorder(root->right, ans);
  }
    bool isBST(Node* root) {
        // code here
        vector<int>ans;
        inorder(root,ans); 
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1])
            return 0;
        }
        return 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna