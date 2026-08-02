# [Stickler Thief II](https://www.geeksforgeeks.org/problems/house-robber-ii/1)
## Medium
You are given an array arr[] which represents houses arranged in a circle, where each house has a certain value. A thief aims to maximize the total stolen value without robbing two adjacent houses.Determine the maximum amount the thief can steal.
Note:&nbsp;Since the houses are in a circle, the first and last houses are also considered&nbsp;adjacent.
Examples:
Input: arr[] = [2, 3, 2]
Output: 3
Explanation: arr[0] and arr[2] can't be robbed because they are adjacent houses. Thus, 3 is the maximum value thief can rob.
Input: arr[] = [1, 2, 3, 1]
Output: 4
Explanation: Maximum stolen value: arr[0] + arr[2] = 1 + 3 = 4
Input: arr[] = [2, 2, 3, 1, 2]
Output: 5
Explanation: Maximum stolen value: arr[0] + arr[2] = 2 + 3 = 5 or arr[2] + arr[4] = 3 + 2 = 5
Constraints:2 ≤ arr.size() ≤ 1050 ≤ arr[i] ≤ 104