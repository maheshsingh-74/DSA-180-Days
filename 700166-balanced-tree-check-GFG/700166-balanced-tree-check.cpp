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
  public:  
  int height(Node* root,bool &valid){
      if(!root) return 0;
      int r=height(root->right,valid);
            int l=height(root->left,valid);
            if(abs(l-r)>1) valid=0;
            return 1+max(l,r);

  }
    bool isBalanced(Node* root) {
        // code here
        bool valid=1;
        height(root,valid);
        return valid;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna