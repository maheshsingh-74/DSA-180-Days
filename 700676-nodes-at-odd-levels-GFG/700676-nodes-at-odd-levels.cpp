/* Structure of binary tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};*/
class Solution {
  public:
    vector<int> nodesAtOddLevels(Node *root) {
          vector<int> ans;
        if (!root) return ans;
        
        queue<Node*> q;
        q.push(root);
        int level = 1;
        
        while (!q.empty()) {
            int size = q.size(); 
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();
                
                if (level % 2 != 0) {
                    ans.push_back(temp->data);
                }
                
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            
            level++; 
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna