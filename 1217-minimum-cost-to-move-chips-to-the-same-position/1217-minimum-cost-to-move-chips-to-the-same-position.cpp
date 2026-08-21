class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even=0;
        int odd=0;
        for(int i:position){
            if(i%2==0) even++;
            else odd++;

        }
        return min(odd,even);
    }
};