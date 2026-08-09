/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
public:TreeNode * buildbst(vector<int>&tree, int start, int end){
      if(start>end) return nullptr;
      int mid= start+(end-start+1)/2;
      TreeNode *root= new TreeNode(tree[mid]);
      root->left= buildbst(tree,start, mid-1);
      root->right=buildbst(tree,mid+1,end);
      return root;
      
  }
    TreeNode* sortedListToBST(ListNode* head) {
          vector<int>tree;
        while(head){
            tree.push_back(head->val);
            head= head->next;
        }
        return buildbst(tree, 0,tree.size()-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna