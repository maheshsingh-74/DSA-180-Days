# [Elements in the Range](https://www.geeksforgeeks.org/problems/elements-in-the-range2834/1)
## Easy
Given an array arr[] containing distinct positive integers, and two integers start and end defining a range. Determine if the array contains all elements within inclusive range [start, end].
Note:&nbsp;If the array contains all elements in the given range return true otherwise return false.
Examples :
Input: start = 2, end = 5, arr[] =  [1, 4, 5, 2, 7, 8, 3]
Output: true
Explanation: All integers within the range [2, 5] are 2, 3, 4, and 5, and all of them are present in the array. Therefore, the answer is true for this test case.
Input: start = 2, end = 6, arr[] = [1, 4, 5, 2, 7, 8, 3]
Output: false
Explanation: The array does not contain 6; hence, it does not contain all the elements in the range [2, 6]. Therefore, the output is false.

Constraints:1 ≤ arr.size() ≤ 1050 ≤ arr[i] ≤ 1050 ≤ start ≤ end ≤ 105