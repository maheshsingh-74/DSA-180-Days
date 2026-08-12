# [Nodes without a Sibling](https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1)
## Easy
Given the root of a Binary Tree, find all nodes that do not have a sibling. Return the nodes in increasing order.
Two nodes are considered siblings if they share the same parent.
Note:

The root node cannot have a parent, so it should not be included in the answer&nbsp;
If every node has a sibling, return a list containing only -1.

Examples:
Input: root = [37, 20, N, N, 113]
Output: [20, 113]
Explanation: Nodes 20 and 113 dont have any siblings.
Input: root[] = [1, 2, 3, 4]
Output: [4]
Explanation: Node 4 does not have a sibling.
Input: root[] = [37, 40, 13] Output: [-1]
Explanation: Every node of the tree has a sibling.
Constraints:1 ≤ number of nodes ≤ 1041 ≤ node-&gt;data ≤ 104