# [Remove duplicates from a linked list](https://www.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1)
## Easy
Given a head of an unsorted linked list. Remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all other duplicates are to be removed.
Examples:
Input: head = 5 -&gt; 2 -&gt; 2 -&gt; 4
Output: 5 -&gt; 2 -&gt; 4
Explanation: Given linked list elements are 5 -&gt; 2 -&gt; 2 -&gt; 4, in which 2 is repeated only. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain 5-&gt;2-&gt;4 
Input: head = 2 -&gt; 2 -&gt; 2 -&gt; 2 -&gt; 2
Output: 2
Explanation: Given linked list elements are 2 -&gt; 2 -&gt; 2 -&gt; 2 -&gt; 2, in which 2 is repeated. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain only 2.
Constraints:1 ≤ number of nodes ≤ 1060 ≤ node-&gt;data ≤ 106