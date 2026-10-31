class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
          unordered_map<int,int> frequency;
        int n=A.size();
        int totalcount=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=A[i]+B[j];
                frequency[sum]++;
                
            }
        }
        
       
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=C[i]+D[j];
                auto it=frequency.find(-sum);
                if(it!=frequency.end()){
                       totalcount+= (it->second);    
                    
                }
                
            }
        }
        
        return totalcount;
    }
};