class Solution {
  public:
    int myAtoi(string &s) {
        // code here
           if (s.length() == 0)
            return 0;
        int i = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        s = s.substr(i);
        int sign = +1;
       long long int ans = 0;
        if (s[0] == '-')
            sign = -1;
        i = (s[0] == '+' || s[0] == '-') ? 1 : 0;
        int max = INT_MAX, min = INT_MIN;
        while (i < s.length()) {
            if (s[i] == ' ' || !isdigit(s[i]))
                break;
            ans = ans * 10 + (s[i] - '0');
            if (sign == -1 && -1 * ans < min)
                return INT_MIN;
            if (sign == +1 && +1 * ans > max)
                return INT_MAX;
            i++;
        }
        return (int)(sign * ans);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna