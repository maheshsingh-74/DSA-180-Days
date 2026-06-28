class Solution {
public:
   bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int i = 0; 
    int j = 0; 
    int k = 0; 
    int l = 0; 

    while (i < word1.size() && j < word2.size()) {
        if (word1[i] [k] != word2[j] [l]) {
            return false;
        }

        k++;
        l++;

        if (k == word1[i].size()) {
            k = 0;
            i++;
        }

        if (l == word2[j].size()) {
            l = 0;
            j++;
        }
    }

    return i == word1.size() && j == word2.size();
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna