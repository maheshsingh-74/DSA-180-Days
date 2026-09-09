
class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        pair<int, int> prev;
        int n = position.size();
        prev = {speed[n-1], position[n-1]};
        int sol = 1;
        for(int i = n-2; i >= 0; i--){
            if(speed[i] > prev.first || prev.second - position[i] <= distance){
                prev = {prev.first, position[i]};
            }else{
                sol++;
                prev = {speed[i],position[i]};
            }
        }
        return sol;
    }
};