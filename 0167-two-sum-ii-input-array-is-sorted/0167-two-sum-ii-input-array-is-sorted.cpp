class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int idx1=0;
        int idx2=n-1;
        while(idx1<idx2){
            //int mid=idx1+(idx2-idx1)/2;
            if(numbers[idx1]+numbers[idx2]>target)idx2--;
            else if(numbers[idx1]+numbers[idx2]<target)idx1++;
            else return{idx1+1,idx2+1};
        }
        return {idx1+1,idx2+1};
    }
};