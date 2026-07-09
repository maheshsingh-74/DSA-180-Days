class Solution {
	public:
// 	int findmaxsubsum(vector<vector<int>> &mat,int i,int j,int x,int y){
// 	    int ans=mat[x][y];
// 	    if(j-1>=0)ans-=mat[x][j-1];
// 	    if(i-1>=0) ans-=mat[i-1][y];
// 	    if((j-1>=0)&& (i-1>=0))ans+= mat[i-1][j-1];
// 	    return ans;
// 	}
	int maxRectSum(vector<vector<int>> &mat) {
		// code here
// 		int n = mat.size();
// 		int m = mat[0].size();
// 		for (int i = 0; i<n; i++) {
// 			for (int j = 1; j<m; j++) {
// 				mat[i][j] += mat[i][j - 1];
// 			}
// 		}
// 		for (int j = 0; j<m; j++) {
// 			for (int i = 1; i<n; i++) {
// 				mat[i][j] += mat[i - 1][j];
// 			}
// 		}
// 		int ans=INT_MIN;
// 		for (int i = 0; i<n; i++) {
// 			for (int j = 0; j<m; j++) {
// 				for (int x = i; x<n; x++) {
// 					for(int y=j;y<m;y++){
// 					    int sum = findmaxsubsum(mat,i,j,x,y);
// 					    ans=max(ans,sum);
// 					}
// 				}
// 			}
// 		}
// 		return ans;

        int n = mat.size();
        int m = mat[0].size();
        int ans = INT_MIN;

        // Step 1: Compute a 2D Prefix Sum column-wise
        // mat[i][j] will store the sum of elements from row 0 to i in column j
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mat[i][j] += mat[i - 1][j];
            }
        }

        // Step 2: Fix the top row (r1) and bottom row (r2) boundaries
        for (int r1 = 0; r1 < n; r1++) {
            for (int r2 = r1; r2 < n; r2++) {
                
                // Step 3: Run Kadane's algorithm across columns for this row span
                int currentMax = 0;
                int globalMax = INT_MIN;

                for (int c = 0; c < m; c++) {
                    // Get the sum of elements in column 'c' between row r1 and r2 using your prefix sum
                    int colSum = mat[r2][c];
                    if (r1 > 0) {
                        colSum -= mat[r1 - 1][c];
                    }

                    // Standard Kadane's Algorithm logic
                    currentMax += colSum;
                    if (currentMax > globalMax) {
                        globalMax = currentMax;
                    }
                    if (currentMax < 0) {
                        currentMax = 0;
                    }
                }

                // Update the final answer
                ans = max(ans, globalMax);
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna