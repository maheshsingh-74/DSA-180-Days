/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        if(!root) return {};
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int n= q.size();
            vector<int>res;
            while(n--){
            Node* temp=q.front();
            q.pop();
            
            res.push_back(temp->data);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            }
            if(level%2==0) reverse(res.begin(),res.end());
            level++;
            for(int i=0;i<res.size();i++)
            ans.push_back(res[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna