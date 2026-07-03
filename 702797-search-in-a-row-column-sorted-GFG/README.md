# [Search in a Row-Column Sorted](https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1)
## Easy
Given a 2D integer matrix mat[][] of size n x m, where every row and column is sorted in increasing order and a number x, the task is to find whether element x is present in the matrix.
Examples:
Input: mat[][] = [[3, 30, 38],[20, 52, 54],[35, 60, 69]], x = 62
Output: false
Explanation: 62 is not present in the matrix, so output is false.
Input: mat[][] = [[18, 21, 27],[38, 55, 67]], x = 55
Output: true
Explanation: 55 is present in the matrix.
Input: mat[][] = [[1, 2, 3],[4, 5, 6],[7, 8, 9]], x = 3
Output: true
Explanation: 3 is present in the matrix.
Constraints:1 &lt;= n, m &lt;=10001 &lt;= mat[i][j] &lt;= 109 1&lt;= x &lt;= 109