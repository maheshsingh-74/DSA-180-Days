/* Structure of linked list Node
class Node {
	public:
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */
class Solution {
	public:
	Node* removeDuplicates(Node* head) {
		if (!head || !head->next)
			return head;
		unordered_set<int>mp;
		Node* curr = head;
		Node* prev = nullptr;
		
		while (curr != nullptr) {
			if (mp.find(curr->data) != mp.end()) {
				prev->next = curr->next;
				delete curr;
				curr = prev->next;
				
			}
			else {
				mp.insert(curr->data);
				prev = curr;
				curr=curr->next;
			}
			
		}
		return head;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna