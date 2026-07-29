class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
         int n1 = num1.size();
        int n2= num2.size();
        vector<int>rem(n1+n2,0);
      for(int i=n1-1;i>=0;i--){
        for(int j=n2-1;j>=0;j--){
            int mul=(num1[i]-'0')*(num2[j]-'0');
            int sum=mul+rem[i+j+1];
            rem[i+j+1]=sum%10;
            rem[i+j]+=sum/10;
        }
      }
string result="";
int i=0;
while(i<rem.size() && rem[i]==0){
    i++;

}
while(i<rem.size()){
    result.push_back(rem[i]+'0');
    i++;
}
return result;
      
        
        
     }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna