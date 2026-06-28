class Solution {
public:
    string intToRoman(int num) {
            static const vector<int> values = {
        1000, 900, 500, 400, 
        100, 90, 50, 40, 
        10, 9, 5, 4, 1
    };
    
    static const vector<string> symbols = {
        "M", "CM", "D", "CD", 
        "C", "XC", "L", "XL", 
        "X", "IX", "V", "IV", "I"
    };

    string result = "";

    for (int i = 0; i < values.size(); ++i) {
        if (num == 0) break;

        int count = num / values[i];

        for (int j = 0; j < count; ++j) {
            result += symbols[i];
        }

        num %= values[i];
    }

    return result;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna