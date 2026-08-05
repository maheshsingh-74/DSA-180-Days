# [Delete Middle of Linked List](https://www.geeksforgeeks.org/problems/delete-middle-of-linked-list/1)
## Easy
Given a singly linked list, delete the middle&nbsp;of the linked list.
Note:

If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. 
If the input linked list has a single node, then it should return NULL.

Examples:
Input: LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
Output: 1-&gt;2-&gt;4-&gt;5Explanation:
Input: LinkedList: 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1
Output: 2-&gt;4-&gt;6-&gt;5-&gt;1Explaination:
Input: LinkedList: 7 Output: &lt;empty linked list&gt;Explanation: There was only one node and it was deleted.
Constraints:1 &lt;= number of nodes &lt;= 1051 &lt;= node-&gt;data &lt;= 109