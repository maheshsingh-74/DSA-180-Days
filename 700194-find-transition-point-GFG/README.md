# [Find Transition Point](https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1)
## Easy
Given a sorted array, arr[] containing only 0s and 1s, find the transition point, i.e., the first index where 1 was observed, and before that, only 0 was observed.&nbsp; If arr does not have any 1, return&nbsp;-1. If array does not have any&nbsp;0, return&nbsp;0.
Examples:
Input: arr[] = [0, 0, 0, 1, 1]
Output: 3
Explanation: index 3 is the transition point where 1 begins.
Input: arr[] = [0, 0, 0, 0]
Output: -1
Explanation: Since, there is no "1", the answer is -1.
Input: arr[] = [1, 1, 1]
Output: 0
Explanation: There are no 0s in the array, so the transition point is 0, indicating that the first index (which contains 1) is also the first position of the array.
Input: arr[] = [0, 1, 1]
Output: 1
Explanation: Index 1 is the transition point where 1 starts, and before it, only 0 was observed.
Constraints:1 ≤ arr.size() ≤ 1050 ≤ arr[i] ≤ 1