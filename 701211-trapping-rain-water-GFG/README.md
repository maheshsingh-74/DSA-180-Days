# [Trapping Rain Water](https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1)
## Hard
Given an array arr[] with non-negative integers representing the height of blocks. If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.&nbsp;
Examples:
Input: arr[] = [3, 0, 1, 0, 4, 0, 2]
Output: 10
Explanation: Total water trapped = 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.
Input: arr[] = [3, 0, 2, 0, 4]
Output: 7
Explanation: Total water trapped = 0 + 3 + 1 + 3 + 0 = 7 units.

Input: arr[] = [1, 2, 3, 4]
Output: 0
Explanation: We cannot trap water as there is no height bound on both sides.
Input: arr[] = [2, 1, 5, 3, 1, 0, 4]
Output: 9
Explanation: Total water trapped = 0 + 1 + 0 + 1 + 3 + 4 + 0 = 9 units.
Constraints:1 &lt; arr.size() &lt; 1050 &lt; arr[i] &lt; 103