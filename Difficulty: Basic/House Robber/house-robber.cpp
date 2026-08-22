class Solution {
  public:
    int maximizeMoney(int n, int k) {
        // code here
        return k*(n-(n/2));
    }
};