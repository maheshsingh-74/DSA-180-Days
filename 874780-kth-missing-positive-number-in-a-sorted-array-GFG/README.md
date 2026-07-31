# [Kth Missing Positive Number in a Sorted Array](https://www.geeksforgeeks.org/problems/kth-missing-positive-number-in-a-sorted-array/1)
## Medium
Given a sorted array of distinct positive integers arr[], You need to find the kth positive number that is missing from the arr[].
Examples:
Input: arr[] = [2, 3, 4, 7, 11], k = 5Output: 9
Explanation: Missing are 1, 5, 6, 8, 9, 10… and 5th missing number is 9.

Input: arr[] = [1, 2, 3], k = 2
Output: 5
Explanation: Missing are 4, 5, 6… and 2nd missing number is 5.
Input: arr[] = [3, 5, 9, 10, 11, 12], k = 2
Output: 2
Explanation: Missing are 1, 2, 4, 6… and 2nd missing number is 2.
Constraints:1 ≤ arr.size() ≤ 1051 ≤ k ≤ 1051 ≤ arr[i] ≤ 106