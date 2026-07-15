# [Level order traversal](https://www.geeksforgeeks.org/problems/level-order-traversal/1)
## Medium
Given the root of a Binary Tree, your task is to return its&nbsp;Level Order Traversal.
Note:&nbsp;A level order traversal is a breadth-first search (BFS) of the tree. It visits nodes level by level, starting from the root, and processes all nodes from left to right within each level before moving to the next.
Examples:
Input: root = [1, 2, N, N, 3, N, N]
Output: [1, 2, 3]Explanation: We start with the root node 1, so the first level of the traversal is [1]. Then we move to its children 2 and 3, which form the next level, giving the final output [1, 2, 3].
Input: root = [10, 20, 30, N, N, 40, 50, N, N, N, N]
Output: [10, 20, 30, 40, 50]Explanation: We begin with the root node 10, which forms the first level as [10]. Its children 20 and 30 make up the second level, and their children 40 and 50 form the third level, resulting in [10, 20, 30, 40, 50].
