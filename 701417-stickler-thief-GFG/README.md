# [Stickler Thief](https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1)
## Medium
Stickler the thief wants to loot money from the houses arranged in a line. He cannot loot two consecutive houses and aims to maximize his total loot.Given an array, arr[] where arr[i] represents the amount of money in the i-th house. Determine the maximum amount he can loot.
Examples:
Input: arr[] = [6, 7, 1, 3, 8, 2, 4]
Output: 19
Explanation: Maximum amount he can get by looting 1st, 3rd, 5th and 7th house, which is 6 + 1 + 8 + 4 = 19.
Input: arr[] = [5, 3, 4, 11, 2]
Output: 16
Explanation: Maximum amount he can get by looting 1st and 4th house, which is 5 + 11 = 16.
Constraints:1 ≤ arr.size() ≤ 1051 ≤ arr[i] ≤ 104