/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
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
  
  Node *tree(vector<int> &inorder, vector<int> &postorder, int instart, int inend,int index){
      if(instart>inend) return nullptr;
      Node* root= new Node(postorder[index]);
      int pos= find(inorder, postorder[index], instart, inend);
            root->right=tree(inorder, postorder,pos+1, inend,index-1);

      root->left=tree(inorder, postorder, instart, pos-1,index-(inend-pos)-1);

      return root;
  }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
                int n = inorder.size();
        return tree(inorder,postorder, 0,n-1,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna