/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        if (arr.empty()) return NULL;

        // Initialize head node directly with the first element
        Node* head = new Node(arr[0]);
        Node* curr = head;

        // Loop through remaining elements and append nodes
        for (int i = 1; i < arr.size(); i++) {
            curr->next = new Node(arr[i]);
            curr = curr->next;
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna