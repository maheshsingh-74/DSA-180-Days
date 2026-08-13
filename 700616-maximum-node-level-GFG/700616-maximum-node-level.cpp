/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public: void rec(Node *root,queue<Node *>q,int &level,int &size,int &levell){
      if(!root) return;
      while(!q.empty()){
          int n= q.size();
          if(n>size){ size=n;
           levell=level;   
          };
          while(n--){
         Node *idx=q.front();
         q.pop();
          if(idx->left)q.push(idx->left);
          if(idx->right)q.push(idx->right);
      }
      level+=1;
      }
  }
    int maxNodeLevel(Node *root) {
     queue<Node *>q;
     q.push(root);
      int level=0;
      int levell=0;
      int size=0;
      rec(root,q,level,size,levell);
      return levell;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna