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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalpoints;
        ListNode* prev = head;
        ListNode* curr = head->next;
        int i = 1;

        while (curr->next != nullptr) {
            bool isMax = curr->val > prev->val && curr->val > curr->next->val;
            bool isMin = curr->val < prev->val && curr->val < curr->next->val;
            if (isMax || isMin) {
                criticalpoints.push_back(i);
            }
            prev = curr;
            curr = curr->next;
            i++;
        }

        if (criticalpoints.size() < 2) return {-1, -1};

        int minDist = INT_MAX;
        for (int j = 1; j < (int)criticalpoints.size(); j++) {
            minDist = min(minDist, criticalpoints[j] - criticalpoints[j - 1]);
        }
        int maxDist = criticalpoints.back() - criticalpoints.front();

        return {minDist, maxDist};
    }
};