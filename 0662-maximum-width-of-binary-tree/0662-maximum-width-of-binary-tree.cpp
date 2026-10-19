class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        
        queue<pair<TreeNode*, unsigned long long>> que;
        que.push({root, 0});
        int maxwidth = 0;
        
        while (!que.empty()) {
            int n = que.size();
            unsigned long long l = que.front().second;
            unsigned long long r = que.back().second;
            maxwidth = max(maxwidth, (int)(r - l + 1));
            
            while (n--) {
                TreeNode* curr = que.front().first;
                unsigned long long idx = que.front().second;
                que.pop();
                
                // Normalize index relative to the start of the level to prevent overflow
                unsigned long long normalized_idx = idx - l;
                
                if (curr->left) que.push({curr->left, 2 * normalized_idx + 1});
                if (curr->right) que.push({curr->right, 2 * normalized_idx + 2});
            }
        }
        return maxwidth;
    }
};