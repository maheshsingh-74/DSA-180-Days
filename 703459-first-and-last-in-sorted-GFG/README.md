# [First and Last in Sorted](https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1)
## Medium
Given a sorted array arr[] with possibly some duplicates, find the first and last occurrences of an element x in the given array.Note:&nbsp;If the number&nbsp;x is not found in the array then return both the indices as -1.
Examples:
Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5
Output: [2, 5]
Explanation: First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5

Input: arr[] = [1, 3, 5, 5, 5, 5, 7, 123, 125], x = 7
Output: [6, 6]Explanation: First and last occurrence of 7 is at index 6
Input: arr[] = [1, 2, 3], x = 4
Output: [-1, -1]
Explanation: No occurrence of 4 in the array, so, output is [-1, -1]
Constraints:1 ≤ arr.size() ≤ 1061 ≤ arr[i], x ≤ 109