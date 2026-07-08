# [Equal Left and Right Subarray Sum](https://www.geeksforgeeks.org/problems/equal-left-and-right-subarray-sum--170647/1)
## Easy
Given an array arr. The task is to find the first index in the array such that the sum of elements before it is equal to the sum of elements after it.&nbsp;Return -1 if no such point exists.
Examples :
Input: arr[] = [1,3,5,2,2] 
Output: 2 
Explanation: For second test case at position 2 elements before it (1+3) = elements after it (2+2). 

Input: arr[] = [1]
Output: 0
Explanation: Since its the only element hence it is the only point.
Input: arr[] = [5, 4, 3, 2, 1]
Output: -1
Constraints:1 ≤ arr.size() ≤ 1060 ≤ arr[i] ≤ 106