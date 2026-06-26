class Solution {
public:
    int findDuplicate(vector<int>& nums) {
int slow= nums[nums[0]];
int fast=nums[nums[nums[0]]];
while(slow!=fast){
    slow=nums[slow];
    fast=nums[nums[fast]];
}
slow=nums[0];
while(slow!=fast){
    slow=nums[slow];
    fast=nums[fast];
    }
    return slow;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna