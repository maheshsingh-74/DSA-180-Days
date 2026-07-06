# [Aggressive Cows](https://www.geeksforgeeks.org/problems/aggressive-cows/1)
## Medium
Given an integer array arr[], which denotes the positions of stalls. All the positions are distinct. There are k aggressive cows.
Assign the cows to the stalls such that the minimum distance between any two cows is maximized.
Examples:
Input: arr[] = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The first cow can be placed at arr[0], the second at arr[2], and the third at arr[3]. The minimum distance between any two cows is 3 (between arr[0] and arr[2]), which is the maximum possible among all valid arrangements.
Input: arr[] = [10, 1, 2, 7, 5], k = 3
Output: 4
Explanation: The first cow can be placed at arr[0], the second at arr[1], and the third at arr[4]. In this arrangement, the minimum distance between any two cows is 4 (between arr[1] and arr[4]), which is the maximum possible among all valid arrangements.
Constraints:2 ≤ arr.size() ≤ 1060 ≤ arr[i] ≤ 1082 ≤ k ≤ arr.size()