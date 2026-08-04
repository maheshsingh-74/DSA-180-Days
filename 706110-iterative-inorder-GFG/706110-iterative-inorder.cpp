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
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        if(!root) return ans;
        stack<Node*>s;
        stack<bool>visited;
        s.push(root);
        visited.push(0);
        while(!s.empty()){
            Node* temp=s.top();
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
        ans.push_back(temp->data);
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna