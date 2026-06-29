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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr1=headA,*curr2=headB;
        int count1=0,count2=0;
        while(curr1){
            count1++;
            curr1=curr1->next;
        }
          while(curr2){
            count2++;
            curr2=curr2->next;
        }
if(count1>count2){
            count1=count1-count2;
                while(count1--){
            headA=headA->next;
          //  count1--;
                }
        }      
       else if(count1<count2){
            count2=-count1+count2;
            while(count2--){
            headB=headB->next;
          //  count1--;
            }
        }    
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna