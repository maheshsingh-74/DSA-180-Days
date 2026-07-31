class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1;
        int n= arr.size();
        int i=0;
        while(i<n && k>0){
            if(arr[i]==num){
                i++;
            }
            else {
                k--;
            }
            num++;
        }
        while(k>0){
            num++;
            k--;
        }
        return num-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna