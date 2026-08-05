/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* deleteMid(Node* head) {
        // code here
        if(!head || !head->next) return nullptr;
        Node* slow= head;
        Node* fast= head;
        Node* prev = nullptr; 
        while(fast && fast->next){
            prev= slow;
            slow=slow->next;
            fast= fast->next->next;
        }
        prev->next= slow->next;
        delete slow;
        return head; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna