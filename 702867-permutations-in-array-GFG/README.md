# [Permutations in array](https://www.geeksforgeeks.org/problems/permutations-in-array1747/1)
## Easy
Given two arrays arr1[], arr2[], and an integer k. The task is to check if after permuting both arrays in such a way, we get the sum of their corresponding element greater than or equal to k i.e. arr1i + arr2i &gt;= k for all i (from 0 to n-1). Return true if possible, else false.&nbsp;
Examples:
Input: k = 10, arr1[] = [2, 1, 3], arr2[] = [7, 8, 9]. 
Output: true
Explanation: Permutation  arr1[] = [1, 2, 3] and arr2[] = [9, 8, 7] satisfy the condition arr1[i] + arr2[i] &gt;= k
Input: k = 5, arr1[] = [1, 2, 2, 1], arr2[] = [3, 3, 3, 4].
Output: false
Explanation: Since any permutation won't give the answer.
Expected Time Complexity: O(n*log(n))Expected Auxiliary Space: O(1)
Constraints:1 ≤ arr.size() ≤ 1050 ≤ k ≤ 1050 ≤ arr1i, arr2i ≤ 2*105