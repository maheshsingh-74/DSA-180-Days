class Solution {
public:
    int t[502][502];

    int minDistance(string a, string b) {
        int n = a.length();
        int m = b.length();

        // Base cases
        for (int j = 0; j <= m; j++) {
            t[n][j] = m - j; // Remaining insertions
        }
        for (int i = 0; i <= n; i++) {
            t[i][m] = n - i; // Remaining deletions
        }

        // Fill table bottom-up backwards
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                if (a[i] == b[j]) {
                    t[i][j] = t[i + 1][j + 1];
                } else {
                    int insertt = 1 + t[i][j + 1];
                    int deletee = 1 + t[i + 1][j];
                    int replacee = 1 + t[i + 1][j + 1];

                    t[i][j] = min({insertt, deletee, replacee});
                }
            }
        }

        return t[0][0];
    }
};