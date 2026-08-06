class Solution {
public:
    void find(Node *root, int pos, int &l, int &r) {
        if (!root) return;
        l = min(pos, l);
        r = max(r, pos);
        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }

    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> result;
        if (!root) return result;

        int l = 0, r = 0;
        find(root, 0, l, r);

        vector<vector<int>> positive(r + 1);
        vector<vector<int>> negative(abs(l) + 1);

        queue<Node*> q;
        queue<int> idx;
        
        q.push(root);
        idx.push(0);

        while (!q.empty()) {
            Node *temp = q.front();
            q.pop();
            int pos = idx.front();
            idx.pop();

            if (pos >= 0) {
                positive[pos].push_back(temp->data);
            } else {
                negative[abs(pos)].push_back(temp->data);
            }

            if (temp->left) {
                q.push(temp->left);
                idx.push(pos - 1);
            }
            if (temp->right) {
                q.push(temp->right);
                idx.push(pos + 1);
            }
        }

        for (int i = abs(l); i >= 1; i--) {
            if (!negative[i].empty()) {
                result.push_back(negative[i]);
            }
        }

        // Traverse positive indices from 0 to rightmost
        for (int i = 0; i <= r; i++) {
            if (!positive[i].empty()) {
                result.push_back(positive[i]);
            }
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna