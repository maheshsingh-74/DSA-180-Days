# [Intersection of Two Linked Lists](https://www.geeksforgeeks.org/problems/intersection-of-two-linked-list/1)
## Easy
Given two linked lists head1 and head2, find&nbsp;the intersection of two linked lists. Each of the two linked lists contains distinct node values.
Note:&nbsp;The order of nodes in this list should be the same as the order in which those particular nodes appear in input head1 and return null if no common element is present.
Examples:
Input: head1: 9-&gt;6-&gt;4-&gt;2-&gt;3-&gt;8 , head2: 1-&gt;2-&gt;8-&gt;6 Output: 6-&gt;2-&gt;8Explanation: Nodes 6, 2 and 8 are common in both of the lists and the order will be according to LinkedList1. 
Input: head1: 5-&gt;3-&gt;1-&gt;13-&gt;14 , head2: 3-&gt;13 Output: 3-&gt;13Explanation: Nodes 3 and 13 are common in both of the lists and the order will be according to LinkedList1. 
Constraints:1 ≤ no. of nodes in head1, head2 ≤ 1041 ≤ node-&gt;data ≤ 105