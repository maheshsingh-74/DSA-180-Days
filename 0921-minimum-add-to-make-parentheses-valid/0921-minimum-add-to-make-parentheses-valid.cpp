class Solution {
public:
    int minAddToMakeValid(string s) {
      stack<char> ans;
      int count=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='(')
        ans.push(s[i]);
        else{
            if(ans.empty())
            count++;
        else 
        ans.pop();
        }
      }
      return count+ ans.size();
    }
};