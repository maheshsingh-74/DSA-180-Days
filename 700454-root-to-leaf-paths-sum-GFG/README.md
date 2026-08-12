# [Root to Leaf Paths Sum](https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1)
## Medium
Given the root of a binary tree where each node contains a single digit (0–9). 

Every root-to-leaf path represents a number formed by concatenating the digits along the path. 
Starting from the root, each next digit is appended to the current number (i.e., currentNumber = currentNumber × 10 + node-&gt;data).
Return the sum of all the numbers formed by every root-to-leaf path.

Examples:
Input:      
Output: 13997
Explanation : There are 4 leaves, resulting in leaf path of 632, 6357, 6354, 654 sums to 13997.
Input:     
Output: 222
Explanation: There are 3 leaves, resulting in leaf path of 103, 100, 19 sums to 222.
Constraints:1 ≤ number of nodes ≤ 310 ≤ node-&gt;data ≤ 9