class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {
        // Create a max-heap
        priority_queue<int> maxHeap;
        
        for (int num : arr) {
            maxHeap.push(num);
            
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        
        return maxHeap.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna