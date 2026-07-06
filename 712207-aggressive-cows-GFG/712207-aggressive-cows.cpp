class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int start=1;
        int n=arr.size();
        int ans;
        sort(arr.begin(),arr.end());
     long long int end=arr[n-1]-arr[0];
    
        while(start<=end){
            int mid=start +(end-start)/2;
            int count=1;
            long long int pos=arr[0];
            for(int i=0;i<arr.size();i++){
                if(pos+mid<=arr[i]){
                    count++;
                    pos=arr[i];
                }
            }
            if(count<k) end=mid-1;
            else{
                ans=mid;
                start=mid+1;
            }
        }
    
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna