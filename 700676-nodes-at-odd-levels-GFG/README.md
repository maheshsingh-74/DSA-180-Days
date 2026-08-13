# [Nodes at Odd Levels](https://www.geeksforgeeks.org/problems/nodes-at-odd-levels/1)
## Easy
Given the root of a binary tree, return a sorted list of all node values that appear at odd levels of the tree. The root is considered to be at level 1.
Examples :
Input: root = [1, 2, 3, 4, 5, N, 7]
Output: [1, 4, 5, 7]Explanation: The odd levels are 1 and 3 and thier node are 1 and 4 5 and 7 respectively. 
Input: root = [1, 2, 3, 4, 5, N, 6, N, N, 7, 8, 9]  Output: [1, 4, 5, 6]Explanation: The odd levels are 1 and 3 and their nodes are 1, 4, 5 and 6 respectively. 
Constraints:1 ≤ number of nodes ≤ 1051 ≤ node-&gt;data ≤ 109