class Solution {
public:int n;
    int countRotations(string s, int k) {
        string ss=s+s;
       n= ss.length(); 
       int ans=0;
       for(int i=0;i<n-s.length();i++){
        int score=0;
        for(int j=i+1;j<i+s.length();j++){
            if(ss[j]==ss[j-1])score++;

        }
        if(score==k)ans++;
       }
       return ans;
    }
};