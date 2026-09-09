
class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
       int n = position.size();
       int ans= n;
       int sp= speed.back();
       for(int i=n-2;i>=0;i--){
        if(sp<speed[i]||position[i+1]-position[i]<=distance){
            ans--;
        }
        else sp= speed[i];
       }
       return ans;
    }
};