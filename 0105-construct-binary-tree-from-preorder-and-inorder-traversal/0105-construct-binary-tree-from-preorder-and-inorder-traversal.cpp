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
public: int find(vector<int> &inorder,int target, int start, int end){
      for(int i=start; i<=end;i++){
          if(inorder[i]==target) return i;
      }
      return -1;
  }
  TreeNode *tree(vector<int> &inorder, vector<int> &preorder, int instart, int inend,int index){
      if(instart>inend) return nullptr;
      TreeNode* root= new TreeNode(preorder[index]);
      int pos= find(inorder, preorder[index], instart, inend);
      root->left=tree(inorder, preorder, instart, pos-1,index+1);
      root->right=tree(inorder, preorder,pos+1, inend,index+(pos-instart)+1);
  
      return root;
  }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         int n = inorder.size();
        return tree(inorder,preorder, 0,n-1,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna