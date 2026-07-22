class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
                int n= arr.size();

        if(n<2) return -1;
        sort(arr.begin(),arr.end());
int i=n-2;
while(i>=0 && arr[i]==arr[i+1]) i--;
if(i>=0) return arr[i];
return -1;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna