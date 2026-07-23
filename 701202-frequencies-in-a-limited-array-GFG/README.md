# [Frequencies in a Limited Array](https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1)
## Easy
Given an array arr[]&nbsp;containing positive integers. The elements in the array&nbsp;arr[] range from&nbsp; 1 to n (where n is the size of the array), and some numbers may be repeated or absent. Your have to count the frequency of all numbers in the range 1 to n and return an array of size n such that&nbsp;result[i]&nbsp;represents the frequency of the number i (1-based indexing).
Examples:
Input: arr[] = [2, 3, 2, 3, 5]
Output: [0, 2, 2, 0, 1]Explanation: We have: 1 occurring 0 times, 2 occurring 2 times, 3 occurring 2 times, 4 occurring 0 times, and 5 occurring 1 time.
Input: arr[] = [3, 3, 3, 3]
Output: [0, 0, 4, 0]
Explanation: We have: 1 occurring 0 times, 2 occurring 0 times, 3 occurring 4 times, and 4 occurring 0 times.
Input: arr[] = [1]
Output: [1]
Explanation: We have: 1 occurring 1 time, and there are no other numbers between 1 and the size of the array.
Constraints:1 ≤ arr.size() ≤ 1061&nbsp;≤&nbsp;arr[i]&nbsp;≤ arr.size()