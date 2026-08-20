class Solution {
  public:
    int assignHole(vector<int>& m, vector<int>& h) {
        // code here
        sort(m.begin(),m.end());
        sort(h.begin(),h.end());
        int minn=0;
        for(int i=0;i<m.size();i++){
            minn= max(minn,abs(m[i]-h[i]));
        }
        return minn;
    }
};