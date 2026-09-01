class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size(), n = classroom[0].size();
        vector<vector<int>> litterId(m, vector<int>(n, -1));
        int litterCount = 0;
        int sr = -1, sc = -1;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                char c = classroom[i][j];
                if (c == 'S') { sr = i; sc = j; }
                else if (c == 'L') litterId[i][j] = litterCount++;
            }

        int fullMask = (1 << litterCount) - 1;
        if (fullMask == 0) return 0;

        int maskSize = 1 << litterCount;
        vector<int> bestEnergy((size_t)m * n * maskSize, -1);
        auto idx = [&](int r, int c, int mask) {
            return ((size_t)r * n + c) * maskSize + mask;
        };

        struct St { int r, c, mask, e; };
        vector<St> curLevel, nextLevel;

        bestEnergy[idx(sr, sc, 0)] = energy;
        curLevel.push_back({sr, sc, 0, energy});

        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        int moves = 0;

        while (!curLevel.empty()) {
            nextLevel.clear();
            for (auto &st : curLevel) {
                int r = st.r, c = st.c, mask = st.mask, e = st.e;
                if (e != bestEnergy[idx(r, c, mask)]) continue; // stale/dominated entry
                if (e == 0) continue;                            // stuck

                for (int d = 0; d < 4; d++) {
                    int nr = r + dr[d], nc = c + dc[d];
                    if (nr < 0 || nr >= m || nc < 0 || nc >= n) continue;
                    if (classroom[nr][nc] == 'X') continue;

                    int ne = (classroom[nr][nc] == 'R') ? energy : e - 1;
                    int nmask = mask;
                    if (litterId[nr][nc] != -1) nmask |= (1 << litterId[nr][nc]);

                    if (nmask == fullMask) return moves + 1;

                    int id = idx(nr, nc, nmask);
                    if (ne > bestEnergy[id]) {
                        bestEnergy[id] = ne;
                        nextLevel.push_back({nr, nc, nmask, ne});
                    }
                }
            }
            moves++;
            swap(curLevel, nextLevel);
        }
        return -1;
    }
};