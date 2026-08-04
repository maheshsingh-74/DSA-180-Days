/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public: 
  
  int find(vector<int> &inorder,int target, int start, int end){
      for(int i=start; i<=end;i++){
          if(inorder[i]==target) return i;
      }
      return -1;
  }
  
  Node *tree(vector<int> &inorder, vector<int> &preorder, int instart, int inend,int index){
      if(instart>inend) return nullptr;
      Node* root= new Node(preorder[index]);
      int pos= find(inorder, preorder[index], instart, inend);
      root->left=tree(inorder, preorder, instart, pos-1,index+1);
      root->right=tree(inorder, preorder,pos+1, inend,index+(pos-instart)+1);
  
      return root;
  }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        int n = inorder.size();
        return tree(inorder,preorder, 0,n-1,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna