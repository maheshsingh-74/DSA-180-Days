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
    vector<int> inorderTraversal(TreeNode* root) {
           vector<int>ans;
        if(!root) return ans;
        stack<TreeNode*>s;
        stack<bool>visited;
        s.push(root);
        visited.push(0);
        while(!s.empty()){
            TreeNode* temp=s.top();
            s.pop();
            bool flag=visited.top();
            visited.pop();
            if(flag==0){
                if(temp->right){
                    s.push(temp->right);
                    visited.push(0);
                }
                    s.push(temp);
                    visited.push(1);
                     if(temp->left){
                    s.push(temp->left);
                    visited.push(0);
                }
            
            
        }
        else 
        ans.push_back(temp->val);
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna