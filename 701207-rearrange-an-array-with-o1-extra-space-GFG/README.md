# [Rearrange an array with O(1) extra space](https://www.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1)
## Medium
Given an array&nbsp;arr[] of size n where every element is in the range from&nbsp;0&nbsp;to&nbsp;n-1. Rearrange the given array so that the transformed array arrT[i] becomes&nbsp;arr[arr[i]].NOTE:&nbsp;arr and&nbsp;arrT are both same variables, representing the array before and after transformation respectively.
Examples:
Input: arr[] = [1,0]
Output: [0, 1]
Explanation: arr[arr[0]] = arr[1] = 0, arr[arr[1]] = arr[0] = 1 So, arrT becomes [0, 1]

Input: arr[] = [4,0,2,1,3]
Output: [3, 4, 2, 0, 1]
Explanation: arr[arr[0]] = arr[4] = 3, arr[arr[1]] = arr[0] = 4, arr[arr[2]] = arr[2] = 2, arr[arr[3]] = arr[1] = 0, arr[arr[4]] = arr[3] = 1 and so on So, arrT becomes [3, 4, 2, 0, 1]
Constraints:1 ≤ n ≤ 1050 ≤ arr[i] &lt; n