/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
}; */
class Solution {
  public:
    Node* divide(Node* head) {
        if(!head || !head->next) return head;
     Node* eh=NULL;
     Node* et=NULL;
     Node* ot=NULL;
     Node* oh=NULL;
       
       while(head){
           Node *next=head->next;
           head;
           if(head->data %2==0){
               if(eh==nullptr){
                   eh=head;
                   et=head;
               }
               else {
                   et->next=head;
                   et=et->next;
               }
           }
           else {
                 if(oh==nullptr){
                   oh=head;
                   ot=head;
               }
               else {
                   ot->next=head;
                   ot=ot->next;
               }
           }
           head=next;
       }
       if (ot != nullptr) {
           ot->next = nullptr;
       }
        if(eh==nullptr) return oh;
        
            et->next=oh;
            
        
        return eh;
    }
};