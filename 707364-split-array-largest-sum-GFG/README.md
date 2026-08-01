# [Split Array Largest Sum](https://www.geeksforgeeks.org/problems/split-array-largest-sum--141634/1)
## Hard
Given an array arr[] and an integer k, divide the array into k contiguous subarrays such that the maximum sum among these subarrays is minimized. Find this minimum possible maximum sum.
Examples:
Input: arr[] = [1, 2, 3, 4], k = 3Output: 4Explanation: Optimal Split is [1, 2], [3], [4]. Maximum sum of all subarrays is 4, which is minimum possible for 3 splits.
Input: arr[] = [1, 1, 2], k = 2Output: 2Explanation: Splitting the array as [1, 1] and [2] is optimal. This results in a maximum sum subarray of 2.
Constraints:1 ≤ k&nbsp;≤ arr.size() ≤ 1051 ≤ arr[i] ≤ 104