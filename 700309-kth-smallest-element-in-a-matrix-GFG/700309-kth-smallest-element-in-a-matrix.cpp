class Solution {
  public:
    int kthSmallest(vector<vector<int>> &m, int k) {
        // code here
        int n= m[0].size();
        vector<pair<int,pair<int,int>>>temp;
        for(int i=0;i<n;i++){
            temp.push_back(make_pair(m[i][0],make_pair(i,0)));
        }
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p(temp.begin(),temp.end());
        int ans;
        pair<int,pair<int,int>>element;
        int i,j;
        while(k--){
            auto element = p.top();
            p.pop();
            ans=element.first;
            i=element.second.first;
            j=element.second.second;
            if(j+1<n){
                p.push(make_pair(m[i][j+1],make_pair(i,j+1)));
            }
        }
        return ans;
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna