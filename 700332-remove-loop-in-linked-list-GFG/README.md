# [Remove loop in Linked List](https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1)
## Medium
Given the head of a singly linked list, the task is to remove a cycle if present. A cycle exists when a node's next pointer points back to a previous node, forming a loop. 

Internally, a variable pos is used to denotes the position of the node where the cycle starts, but it is not passed as a parameter.
The linked list remains as it is if there is cycle in the list.
The output will be "true" if your code works according to expectations, otherwise "false".&nbsp;

Examples:
Input: head = 1 -&gt; 3 -&gt; 4, pos = 2
Output: true
Explanation: The linked list looks likeA loop is present in the list, and it is removed.

Input: head = 1 -&gt; 8 -&gt; 3 -&gt; 4, pos = 0
Output: true
Explanation: The Linked list does not contains any loop. 
Input: head = 1 -&gt; 2 -&gt; 3 -&gt; 4, pos = 1
Output: true
Explanation: The linked list looks like A loop is present in the list, and it is removed.
Constraints:1 ≤ size of linked list ≤ 105