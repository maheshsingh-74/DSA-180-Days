# [Kth smallest element in a Matrix](https://www.geeksforgeeks.org/problems/kth-element-in-matrix/1)
## Medium
Given a matrix&nbsp;mat[][]&nbsp;of size n*n, where each row and column is sorted in&nbsp;non-decreasing&nbsp;order. Find the&nbsp;kth&nbsp;smallest element in the matrix.
Examples:
Input: mat[][] = [[16, 28, 60, 64], k = 3                [22, 41, 63, 91],                [27, 50, 87, 93],                [36, 78, 87, 94]]
Output: 27
Explanation: 27 is the 3rd smallest element.
Input: mat[][] = [[10, 20, 30, 40], k = 7                [15, 25, 35, 45],                [24, 29, 37, 48],                [32, 33, 39, 50]] 
Output: 30
Explanation: 30 is the 7th smallest element.
Constraints:1 ≤ n ≤ 5001 ≤ mat[i][j] ≤ 1041 ≤ k ≤ n*n