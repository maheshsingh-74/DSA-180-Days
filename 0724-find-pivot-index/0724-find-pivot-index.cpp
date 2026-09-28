class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n);
        vector<int> suff(n);

        pref[0] = nums[0];
        suff[n-1] = nums[n-1];

        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + nums[i];
        }
        for(int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1] + nums[i];
        }

        for(int i = 0; i < n; i++){
            int leftSum;
            if(i == 0){
                leftSum = 0;
            }
            else{
                leftSum = pref[i-1];
            }

            int rightSum;
            if(i == n-1){
                rightSum = 0;
            }
            else{
                rightSum = suff[i+1];
            }

            if(leftSum == rightSum){
                return i;
            }
        }
        return -1;  
    }
};