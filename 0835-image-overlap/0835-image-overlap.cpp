class Solution {
public:
    int countoverlaps(vector<vector<int>>& a, vector<vector<int>>& b,
                      int rowoff, int coloff) {
        int n = a.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int b_i=i+rowoff;
                int b_j=j+coloff;
                if(b_i<0||b_i>=n||b_j<0||b_j>=n) continue;
                if(a[i][j]==1 && b[b_i][b_j]==1) count++;
                
            }
        }
        return count;
        
        }
    
    int largestOverlap(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();
        int max_overlap = 0;
        for (int rowoff = -n + 1; rowoff < n; rowoff++) {
            for (int coloff = -n + 1; coloff < n; coloff++) {
                int count = countoverlaps(a, b, rowoff, coloff);
                max_overlap = max(max_overlap, count);
            }
        }
        return max_overlap;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna