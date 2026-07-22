# [Find the element at given index](https://www.geeksforgeeks.org/problems/find-the-element-at-given-index4630/1)
## Medium
Given an array arr[] of n elements. Perform k right circular rotations on given ranges [L...R]. After performing these rotations, we need to find element at a given index x.
Example 1:
Input:
n = 5, x = 1, k = 2
arr[] = {1, 2, 3, 4, 5}
ranges[][] = {{0, 2}, {0, 3}}
Output: 3
Explanation: Rotating the elements in range 
0-2 and 0-3, we have array as 4 3 1 2 5. 
Element at first position is 3.

Example 2:
Input:
n = 3, x = 2, k = 1
arr[] = {1, 2, 3}
ranges[][] = {{0, 1}}
Output: 3

Your Task:You don't need to read input or print anything. Your task is to complete the function&nbsp;findElement()&nbsp;which takes the array of integers&nbsp;arr, n, x, ranges&nbsp;and&nbsp;k&nbsp;as parameters and returns an integer&nbsp;denoting the answer.
Expected Time Complexity: O(k)Expected Auxiliary Space:&nbsp;O(1)
Constraints:2 &lt;= n &lt;= 1051 &lt;= arr[i] &lt;= 1051 &lt;= k &lt;= 105x &lt; n0 &lt;= L &lt;= R&lt;n
&nbsp;