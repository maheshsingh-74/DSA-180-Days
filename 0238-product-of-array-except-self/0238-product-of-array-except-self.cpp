class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>ans;
    int prod=1;
    int count=0;
    vector<int>sol(nums.size(),0);
    int prod_not_zero=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count++;
 prod*=nums[i];
        }
        else {
            prod*=nums[i];
            prod_not_zero*=nums[i];
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0 && count==1)
        ans.push_back(prod_not_zero);
        else if(nums[i]==0 && count>=2){
return sol;
        }
        else 
        ans.push_back(prod/nums[i]);
    }

    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna