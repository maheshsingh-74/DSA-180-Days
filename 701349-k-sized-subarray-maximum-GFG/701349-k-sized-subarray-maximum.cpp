class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& nums, int k) {
        // code here
            int n= nums.size();
        deque<int>deq;
        vector<int>result;
        for(int i=0;i<n;i++){
            while(!deq.empty() && deq.front()<=(i-k)){
                deq.pop_front();
            }
            while(!deq.empty() && nums[i]>=nums[deq.back()]){
                deq.pop_back();
            }
            deq.push_back(i);
            if(i-k+1>=0){
                result.push_back(nums[deq.front()]);
            }

        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna