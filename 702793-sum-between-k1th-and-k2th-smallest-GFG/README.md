# [Sum between k1'th and k2'th smallest](https://www.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/1)
## Easy
Given an array arr[] of positive integers and two integers k1 and k2, find the sum of all array elements whose values lie between the k1-th smallest and the k2-th smallest (both k1th and k2th smallest are not included) of the array.
Examples :
Input: arr[] = [20, 8, 22, 4, 12, 10, 14], k1 = 3, k2 = 6Output: 26Explanation: 3rd smallest is 10 and 6th smallest is 20. Sum of all between k1-th and k2-th is 12 + 14 = 26.
Input: arr[] = [1, 2, 3, 4, 5], k1 = 1, k2 = 5Output: 9Explanation: 1st smallest is 1 and 5th smallest is 5. Sum of all between k1-th and k2-th is 2 + 3 + 4 = 9.
Input: arr[] = [5, 6, 7], k1 = 2, k2 = 3Output: 0Explanation: The 2nd smallest is 6 and the 3rd smallest is 7. Since there are no strictly between 6 and 7, the required sum is 0.
Constraints:2 ≤ arr.size() ≤ 1051 ≤ k1&lt; k2 ≤ arr.size()1 ≤ arr[i] ≤ 2 * 104