class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int count=0;
        int k=strs[0].size();
        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]<strs[j-1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna