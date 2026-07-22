class Solution {
public:
        
     void reverse(vector<vector<int>>& grid,int i , int j){
    int col=grid[0].size();
    while(i<j){
        swap(grid[i/col][i%col],grid[j/col][j%col]);
        i++;
        j--;
    }
}
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k==0) return grid;;
        int row=grid.size();
        int col=grid[0].size();
        int n= row*col;
        k=k%n;
        reverse(grid,0,n-1);
        reverse(grid,0,k-1);
        reverse(grid,k,n-1);
        return grid;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna