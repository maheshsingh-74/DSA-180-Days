class Solution {
public:
    int activitySelection(vector<int>& start, vector<int>& finish) {
        int n = start.size();

        vector<pair<int, int>> activities(n);
        for (int i = 0; i < n; i++) {
            activities[i] = {finish[i], start[i]};
        }

        sort(activities.begin(), activities.end());

        int count = 1;
        int last_finish = activities[0].first;

        for (int i = 1; i < n; i++) {
            if (activities[i].second > last_finish) {
                count++;
                last_finish = activities[i].first;
            }
        }

        return count;
    }
};