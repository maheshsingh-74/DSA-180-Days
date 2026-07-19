# [ZigZag Tree Traversal](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1)
## Medium
Given the root of a binary tree. You have to find the zig-zag level order traversal of the binary tree. Note: In zig zag traversal we traverse the nodes from left to right for odd-numbered levels, and from right to left for even-numbered levels.
Examples:
Input: root = [1, 2, 3, 4, 5, 6, 7]    &nbsp; &nbsp; &nbsp; 
Output: [1, 3, 2, 4, 5, 6, 7]Explanation:Level 1 (left to right): [1]Level 2 (right to left): [3, 2]Level 3 (left to right): [4, 5, 6, 7]Final result: [1, 3, 2, 4, 5, 6, 7]
Input: root = [7, 9, 7, 8, 8, 6, N, 10, 9] 
Output: [7, 7, 9, 8, 8, 6, 9, 10] Explanation:Level 1 (left to right): [7]Level 2 (right to left): [7, 9]Level 3 (left to right): [8, 8, 6]Level 4 (right to left): [9, 10]Final result: [7, 7, 9, 8, 8, 6, 9, 10]
Constraints:1 ≤ number of nodes ≤ 1051 ≤ node-&gt;data ≤ 105