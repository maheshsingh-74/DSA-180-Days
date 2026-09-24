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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        int count = 0;
        ListNode* cur = head;
        while (cur) {
            count++;
            cur = cur->next;
        }

        int diff = count - n; 
        cur = head;
        while (diff--) {
            prev = prev->next;
            cur = cur->next;
        }

        prev->next = cur->next;
        delete cur;
        return dummy.next;
    }
};