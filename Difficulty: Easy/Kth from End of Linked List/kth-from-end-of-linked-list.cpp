/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
       Node * curr=head;
       Node *prev=head;
       for(int i=0;i<k;i++){
           if(curr)
           curr=curr->next;
       
           else return -1;
       }
       while(curr){
           curr=curr->next;
           prev=prev->next;
       }
       return prev->data;
        
    }
};