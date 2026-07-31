# [Search in Rotated Sorted Array](https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1)
## Medium
Given an array arr[] of distinct elements, which was&nbsp;initially sorted in ascending order but then rotated at some unknown pivot, the task is to find the index of a target key.&nbsp; If the key is not present in the array, return -1.
Examples :
Input: arr[] = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 3
Output: 8
Explanation: 3 is found at index 8.
Input: arr[] = [3, 5, 1, 2], key = 6
Output: -1
Explanation: There is no element that has value 6.
Input: arr[] = [33, 42, 72, 99], key = 42
Output: 1
Explanation: 42 is found at index 1.
Constraints:1 ≤ arr.size() ≤ 1060 ≤ arr[i] ≤ 1060 ≤ key ≤ 106