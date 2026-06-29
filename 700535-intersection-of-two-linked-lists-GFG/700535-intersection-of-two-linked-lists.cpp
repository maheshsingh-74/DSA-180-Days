/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/
class Solution {
public:
    Node* findIntersection(Node* head1, Node* head2) {
        unordered_set<int> elementsOfList2;
        
        // Step 1: Store all elements of the second list in a set
        Node* curr2 = head2;
        while (curr2 != nullptr) {
            elementsOfList2.insert(curr2->data);
            curr2 = curr2->next;
        }
        
        // Dummy node to easily construct the new intersection list
        Node* dummy = new Node(0);
        Node* tail = dummy;
        
        // Step 2: Traverse the first list and check against the set
        Node* curr1 = head1;
        while (curr1 != nullptr) {
            if (elementsOfList2.find(curr1->data) != elementsOfList2.end()) {
                // Common element found -> append a new node to our result
                tail->next = new Node(curr1->data);
                tail = tail->next;
            }
            curr1 = curr1->next;
        }
        
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna