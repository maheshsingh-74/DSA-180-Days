# [Implement Lower Bound](https://www.geeksforgeeks.org/problems/implement-lower-bound/1)
## Easy
Given a sorted array&nbsp;arr[]&nbsp;(following 0-based indexing) and a number&nbsp;target, find the lower bound&nbsp;of the&nbsp;target&nbsp;in this given array. The&nbsp;lower bound&nbsp;of a number is defined as the smallest&nbsp;index&nbsp;in the sorted array where the element is&nbsp;greater than or equal to&nbsp;the given number.
Note:&nbsp;If all the elements in the given array are smaller than the&nbsp;target, the lower bound will be the length of the array.&nbsp;
Examples :
Input:  arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9
Output: 3
Explanation: 3 is the smallest index in arr[] where element (arr[3] = 10) is greater than or equal to 9.
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 11
Output: 4
Explanation: 4 is the smallest index in arr[] where element (arr[4] = 11) is greater than or equal to 11.
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 100
Output: 7
Explanation: As no element in arr[] is greater than 100, return the length of array.
Constraints:1 ≤ arr.size() ≤ 1061 ≤ arr[i] ≤ 1061 ≤ target ≤ 106