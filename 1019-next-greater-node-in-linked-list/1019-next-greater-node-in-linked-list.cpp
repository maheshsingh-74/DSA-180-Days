
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nums;

        while (head) {
            nums.push_back(head->val);
            head = head->next;
        }

        int n = nums.size();
        vector<int> ans(n, 0);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }

            if (!st.empty()) {
                ans[i] = st.top();
            }

            st.push(nums[i]);
        }

        return ans;
    }
};
