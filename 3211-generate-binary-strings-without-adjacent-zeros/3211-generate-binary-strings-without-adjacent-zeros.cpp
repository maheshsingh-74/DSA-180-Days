class Solution {
public:
    vector<string> ans;
    void helper(int n, string str, int last) {
        if (n == 0) {
            ans.push_back(str);
            return;
        }
        if(last==0)helper(n-1,str+'1',1);
        else{
            helper(n-1,str+'1',1);
            helper(n-1,str+'0',0);
        }
    }
    vector<string> validStrings(int n) {
       // helper(n, "", 0);
        helper(n,"",1);
        return ans;
    }
};