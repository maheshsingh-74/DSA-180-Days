class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
               long long int ans = (long long)target - nums[i] - nums[j];
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    if ((long long)nums[k] + nums[l] > ans)
                        l--;
                    else if ((long long)nums[k] + nums[l] < ans)
                        k++;
                    else{
                        st.insert({nums[i], nums[j], nums[k], nums[l]});
                l--;
                k++;
                }
                }
            }
        }
        for (auto it : st) {
            res.push_back(it);
        }

        return res;
    }
};