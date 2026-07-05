# [Zero Sum Subarrays](https://www.geeksforgeeks.org/problems/zero-sum-subarrays1825/1)
## Medium
You are given an array arr[] of integers. Find the total count of subarrays with their sum equal to 0.
Examples:
Input: arr[] = [0, 0, 5, 5, 0, 0]
Output: 6
Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0].
Input: arr[] = [6, -1, -3, 4, -2, 2, 4, 6, -12, -7]
Output: 4
Explanation: The 4 subarrays are [-1, -3, 4], [-2, 2], [2, 4, 6, -12], and [-1, -3, 4, -2, 2]

Input: arr[] = [0]
Output: 1
Explanation: The only subarray is [0].
Constraints: &nbsp; &nbsp;1 &lt;= n &lt;= 106-109 &lt;= arr[ i ] &lt;= 109