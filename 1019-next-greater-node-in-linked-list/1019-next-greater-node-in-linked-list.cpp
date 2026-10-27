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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        while(head){
            ListNode* dummy= head->next;
            while(dummy &&  head->val >= dummy->val) dummy= dummy->next;
            if(dummy)ans.push_back(dummy->val);
            else ans.push_back(0);
         //   delete(dummy);
            head=head->next;
        }
        return ans;
    }
};