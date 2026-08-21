class Solution {
  public:
    int rotationCount(int r, int d) {
        // code here
        int ans=0;
       while(r>0 || d>0){
           int rr=r%10;
           int dd=d%10;
            ans+=min(abs(rr-dd),10-abs(rr-dd));
            r/=10;
            d/=10;
        }
        return ans;
    }
};