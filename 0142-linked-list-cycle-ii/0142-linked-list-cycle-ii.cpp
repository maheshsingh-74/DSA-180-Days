/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode* fast=head;
       ListNode* slow=head;
       if(!head || !head->next)return nullptr;
       while(fast && fast->next){
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast) break;
       } 
       if(!fast || !fast->next)return nullptr;
       slow=head;
       while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
       }
       return fast;
    }
};