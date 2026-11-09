class Solution {
public:
    bool isvowel(char& ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    long long countOfSubstrings(string word, int k) {
        unordered_map<char, int> mp;
        int n = word.size();
        vector<int> nextCons(n);
        int lastConsIdx = n;
        for (int i = n - 1; i >= 0; i--) {
            nextCons[i] = lastConsIdx;
            if (!isvowel(word[i])) {
                lastConsIdx = i;
            }
        }
        int i = 0;
        int j = 0;
        int cons = 0;
        long long count = 0;
        while (j < n) {
            char ch = word[j];
            if (isvowel(ch))
                mp[ch]++;
            else {
                cons++;
            }
            while (cons > k) {
                char ch = word[i];
                if (isvowel(ch)) {
                    mp[ch]--;
                    if (mp[ch] == 0)
                        mp.erase(ch);
                }

                else
                    cons--;
                i++;
            }
            while (i < n && mp.size() == 5 && cons == k) { 
                int idx = nextCons[j]; 
                                       
                count += idx - j; 
                char ch = word[i];
                if (isvowel(ch)) {
                    mp[ch]--;
                    if (mp[ch] == 0) {
                        mp.erase(ch);
                    }
                } else {
                    cons--;
                }
                i++;
            }

            j++;
        }
        return count;
    }
};