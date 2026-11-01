class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        long long int sum=0;
        int n= arr.size();
        int i=0;
        while(i<k){
            sum+=arr[i];
            i++;
        }
        long long avg=sum/k;
        int cnt=0;
        int x=0;
        if(avg>=th)cnt++;
        while(i<n){
         sum= sum+arr[i]-arr[x];
         avg=sum/k;
         if(avg>=th)cnt++;
         i++;
         x++;
        }
        return cnt;
    }
};