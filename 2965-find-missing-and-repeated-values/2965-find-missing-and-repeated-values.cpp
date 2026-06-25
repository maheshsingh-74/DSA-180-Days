class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int M=n*n;
        unordered_map<int,int>mp;
        int a=-1;
        int b=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
              mp[grid[i][j]]++;

            }
            }
            for(int i=1;i<=M;i++){
                if(mp.count(i)==0) b=i;
                else if(mp[i]==2) a=i;
                if(a!=-1 && b!=-1) break;
            }

        
        return {a,b};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna