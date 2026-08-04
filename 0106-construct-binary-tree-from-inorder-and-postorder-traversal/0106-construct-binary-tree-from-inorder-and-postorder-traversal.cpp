/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: 
 int find(vector<int> &inorder,int target, int start, int end){
      for(int i=start; i<=end;i++){
          if(inorder[i]==target) return i;
      }
      return -1;
  }
  
  TreeNode *tree(vector<int> &inorder, vector<int> &postorder, int instart, int inend,int index){
      if(instart>inend) return nullptr;
      TreeNode* root= new TreeNode(postorder[index]);
      int pos= find(inorder, postorder[index], instart, inend);
            root->right=tree(inorder, postorder,pos+1, inend,index-1);

      root->left=tree(inorder, postorder, instart, pos-1,index-(inend-pos)-1);

      return root;
  }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
              int n = inorder.size();
        return tree(inorder,postorder, 0,n-1,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna