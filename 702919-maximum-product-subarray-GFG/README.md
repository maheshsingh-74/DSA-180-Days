# [Maximum Product Subarray](https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1)
## Medium
Given an array&nbsp;arr[]&nbsp;that contains positive and negative integers (may contain 0 as well). Find the&nbsp;maximum&nbsp;product that we can get in a subarray of&nbsp;arr[].
Note: It is guaranteed that the answer fits in a 32-bit integer.
Examples
Input: arr[] = [-2, 6, -3, -10, 0, 2]
Output: 180
Explanation: The subarray with maximum product is [6, -3, -10] with product = 6 * (-3) * (-10) = 180.
Input: arr[] = [-1, -3, -10, 0, 6]
Output: 30
Explanation: The subarray with maximum product is [-3, -10] with product = (-3) * (-10) = 30.
Input: arr[] = [2, 3, 4] Output: 24 Explanation: For an array with all positive elements, the result is product of all elements. 
Constraints:1 ≤ arr.size() ≤ 106-100 ≤ arr[i] ≤ 100