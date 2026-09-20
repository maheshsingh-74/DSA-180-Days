class Solution {
public:
    int distMoney(int m, int c) {
        if (m < c) return -1;          // can't even give everyone $1

        m -= c;                        // give everyone their base $1 first
        int ans = min(m / 7, c);       // cap the number of $8-kids at c
        m -= ans * 7;                  // leftover money after those allocations

        // Case: everyone would get $8, but money's still left over
        if (ans == c && m > 0) {
            ans--;
            m += 7;                    // that freed-up child absorbs the rest
        }

        // Case: exactly one child left, and leftover is $3 -> would force a $4
        if (ans == c - 1 && m == 3) {
            ans--;
        }

        return ans;
    }
};