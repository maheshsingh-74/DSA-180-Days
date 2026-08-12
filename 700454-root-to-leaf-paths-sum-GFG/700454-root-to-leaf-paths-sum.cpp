/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */
class Solution {
  public: void count(Node *root,int num,long long int &sum){
      if(root==nullptr) return;
      num=num*10+root->data;
      if(!root->left&& !root->right) sum+=num;
      count(root->left,num, sum);
      count(root->right,num, sum);
  }
    int treePathsSum(Node *root) {
     if(!root) return 0;
   long long int sum=0;
   int num=0;
     count(root,num,sum);
     return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna