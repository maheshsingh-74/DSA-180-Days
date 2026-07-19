class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=-1;
        int j=0;
        while(j<arr.size()){
            if(arr[j]!=0){ arr[i+1]=arr[j];
            
            i++;
            }
            j++;
        }
        for(int x=i+1;x<arr.size();x++){
            arr[x]=0;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna