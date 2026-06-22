class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
        
    
    unordered_map<int,int>m;
     vector<int>ans;
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
                
            }
            if(!st.empty())
            m[arr[i]] = st.top();
            else
            m[arr[i]]=-1;
            
            st.push(arr[i]);
        }
     
        for (int num : nums1) {
            ans.push_back(m[num]);
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna