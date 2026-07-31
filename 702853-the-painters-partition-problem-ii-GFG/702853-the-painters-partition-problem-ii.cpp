class Solution {
  public: bool isvalid(vector<int>& arr,int k,int mid){
     int painterCount = 1; 
    long long currentPaintedLength = 0;

    for (int boardLength : arr) {
        if (boardLength > mid) {
            return false;
        }
        if (currentPaintedLength + boardLength <= mid) {
            currentPaintedLength += boardLength;
        } else {
            painterCount++;
            currentPaintedLength = boardLength;
        }
    }

    return painterCount <= k;
}     
  
    int minTime(vector<int>& arr, int k) {
        int ans=-1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int s=0;
       int e=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isvalid(arr,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna