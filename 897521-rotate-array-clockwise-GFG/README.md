# [Rotate Array Clockwise](https://www.geeksforgeeks.org/problems/rotate-array-clockwise/1)
## Easy
You are given an array arr[] of integers and an integer k. Your task is to rotate the array k&nbsp;times in the clockwise direction.In a single clockwise rotation, the last element of the array moves to the front, and all other elements shift one position to the right.
Examples:
Input: arr[] = [1, 2, 3, 4, 5, 6], k = 2Output: [5, 6, 1, 2, 3, 4]Explanation: Rotating the array 2 times in clockwise gives the array [5, 6, 1, 2, 3, 4].
Input: arr[] = [1, 2, 3, 4, 5], k = 4Output: [2, 3, 4, 5, 1]Explanation: Rotating the array [1, 2, 3, 4, 5] four times clockwise gives the array [2, 3, 4, 5, 1].
Constraints:1 ≤ arr.size() ≤ 1050 ≤ k ≤ 1090 ≤ arr[i] ≤ 109