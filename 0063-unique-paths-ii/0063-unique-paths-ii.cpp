class Solution {
public: int m, n;
    int t[101][101];
    
    int solve(vector<vector<int>>& obstacleGrid, int i, int j) {
        
        if(i < 0 || i >= m || j < 0 || j >= n || obstacleGrid[i][j] != 0) {
            return 0;
        }
        
        if(t[i][j] != -1)
            return t[i][j];
        
        if(i == m-1 && j == n-1)
            return 1;
          int right = solve(obstacleGrid, i, j+1);
        int down  = solve(obstacleGrid, i+1, j);
          return t[i][j] = right + down;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         m = obstacleGrid.size();
        n = obstacleGrid[0].size();
        
        memset(t, -1, sizeof(t));
        
        return solve(obstacleGrid, 0, 0);
    }
};