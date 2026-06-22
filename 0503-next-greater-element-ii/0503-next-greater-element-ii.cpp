class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
         int n=arr.size();
         vector<int>ans(n,-1);
      stack<int>st;
      for(int i=0;i<2*n-1;i++){
        while(!st.empty() && arr[st.top()%n]<arr[i%n]){
            ans[st.top()%n]=arr[i%n];
                st.pop();
                
        }
        st.push(i);
      }  
      return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna