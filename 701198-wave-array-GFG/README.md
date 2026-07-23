# [Wave Array](https://www.geeksforgeeks.org/problems/wave-array-1587115621/1)
## Medium
Given an sorted array arr[] of integers. Sort the array into a wave-like array (In Place). In other words, arrange the elements into a sequence such that : arr[0] ≥ arr[1] ≤ arr[2] ≥ arr[3] ≤ arr[4] ≥ ... and so on. If there are multiple solutions, find the lexicographically smallest one.
Note: The given array is sorted in ascending order, and modify the given array in-place without returning a new array.
Examples:
Input: arr[] = [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]
Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5.
Input: arr[] = [2, 4, 7, 8, 9, 10]
Output: [4, 2, 8, 7, 10, 9]
Explanation: Array elements after sorting it in the waveform are 4, 2, 8, 7, 10, 9.
Input: arr[] = [1]Output: [1]
Constraints:1 ≤ arr.size ≤ 1060 ≤ arr[i] ≤109