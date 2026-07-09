# [Largest subarray of 0's and 1's](https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1)
## Easy
Given an array arr of 0s and 1s. Find and return the length of the longest subarray with equal number of 0s and 1s.
Examples:
Input: arr[] = [1, 0, 1, 1, 1, 0, 0]
Output: 6
Explanation: arr[1...6] is the longest subarray with three 0s and three 1s.
Input: arr[] = [0, 0, 1, 1, 0]
Output: 4Explnation: arr[0...3] or arr[1...4] is the longest subarray with two 0s and two 1s.
Input: arr[] = [0]
Output: 0Explnation: There is no subarray with an equal number of 0s and 1s.
Constraints:1 &lt;= arr.size() &lt;= 1050 &lt;= arr[i] &lt;= 1