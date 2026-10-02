class Solution {
public:
    bool isAlphaNum(int c) {
        return (c >= 97 && c <= 122) ||   // a-z
               (c >= 65 && c <= 90)  ||   // A-Z
               (c >= 48 && c <= 57);      // 0-9
    }

    int toLower(int c) {
        if (c >= 65 && c <= 90) return c + 32;   // A-Z -> a-z
        return c;
    }

    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while (i < j && !isAlphaNum(s[i])) i++;
            while (i < j && !isAlphaNum(s[j])) j--;
            if (toLower(s[i]) != toLower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};