class Solution {
public:
    string frequencySort(string s) {
        string result = "";
        unordered_map<char,int> mp;
        for(auto ch : s)
            mp[ch]++;

        priority_queue<pair<int,char>> pq;
        for(auto it : mp)
            pq.push({it.second, it.first});

        while(!pq.empty()){
            auto [freq, ch] = pq.top();
            pq.pop();
            result.append(freq, ch);   
        }
        return result;
    }
};