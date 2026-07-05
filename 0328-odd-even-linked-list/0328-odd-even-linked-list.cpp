/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         if (!head || !head->next)
            return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* starteven = head->next;
       
        while (even && even->next) {
            odd->next = even->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = starteven;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna