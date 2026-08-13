# [Remove Half Nodes](https://www.geeksforgeeks.org/problems/remove-half-nodes/1)
## Easy
Given the root of a binary tree. Remove all half nodes from the tree. A half node is a node that has exactly one child (either a left child or a right child). When a half node is removed, its only child takes its place and gets connected directly to the removed node's parent.&nbsp;
Return the root of the modified tree after all half nodes have been removed.
Examples:
Input: root[] = [5, 7, 8, 2]
Output: [5, 2, 8]Explanation: Node 7 is a half node because it has only one child (2). After removing node 7, its only child (2) is directly connected to node 5. The level order traversal of the modified tree is: 5 2 8. Hence, the output is [5, 2, 8].
Input: root[] = [3, 1, 2]Output: [3, 1, 2]Explanation: Every node has either zero or two children. Therefore, there are no half nodes to remove, and the tree remains unchanged. The level order traversal of the tree is: 3 1 2. Hence, the output is [3, 1, 2].
Constraints:1 ≤ n ≤ 104, n is the number of nodes1 ≤ node-&gt;data ≤ 104