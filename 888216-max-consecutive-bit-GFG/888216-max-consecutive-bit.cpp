class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
          int count_1=0;
          int count_0=0;
      int max_count=0;
      for (int i=0;i<arr.size();i++){

     if (arr[i]==1){
        count_1+=1;
        count_0=0;
        max_count=max(max_count,count_1);
     }   
else{
    count_1=0;
    count_0+=1;
           max_count=max(max_count,count_0);

}
}
      return max_count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna