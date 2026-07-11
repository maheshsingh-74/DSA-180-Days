class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>scores;
        for (const string& s : op) {
            if (s == "+") {
                scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
            } else if (s == "D") {
                scores.push_back(2 * scores.back());
            } else if (s == "C") {
                scores.pop_back();
            } else {
                scores.push_back(stoi(s));
            }
        }
        
        return accumulate(scores.begin(), scores.end(), 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna