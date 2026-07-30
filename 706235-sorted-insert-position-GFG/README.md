# [Sorted Insert Position](https://www.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1)
## Easy
Given a sorted array arr[]&nbsp;(0-index based) of distinct integers and an integer k, find the index of k if it is present in the arr[]. If not, return the index where k should be inserted to maintain the sorted order.
Examples :
Input: arr[] = [1, 3, 5, 6], k = 5
Output: 2
Explanation: Since 5 is found at index 2 as arr[2] = 5, the output is 2.
Input: arr[] = [1, 3, 5, 6], k = 2
Output: 1
Explanation: The element 2 is not present in the array, but inserting it at index 1 will maintain the sorted order.
Input: arr[] = [2, 6, 7, 10, 14], k = 15Output: 5Explanation: The element 15 is not present in the array, but inserting it after index 4 will maintain the sorted order.
Constraints:1 ≤ arr.size() ≤ 104-103 ≤ arr[i] ≤ 103-103&nbsp;≤ k ≤ 103