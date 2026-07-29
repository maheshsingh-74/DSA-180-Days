# [Check K-th Bit](https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1)
## Easy
Given two positive integer n&nbsp;and&nbsp; k, check if the kth&nbsp;index bit of&nbsp;n&nbsp;is set or not.&nbsp;Note: A bit is called set if it is 1.&nbsp;
Examples :&nbsp;
Input: n = 4, k = 0
Output: false
Explanation: Binary representation of 4 is 100, in which 0th index bit from LSB is not set. So, return false.
Input: n = 4, k = 2
Output: true
Explanation: Binary representation of 4 is 100, in which 2nd index bit from LSB is set. So, return true.
Input: n = 500, k = 3Output: falseExplanation: Binary representation of 500 is 111110100, in which 3rd index bit from LSB is not set. So, return false.
Constraints:1 ≤ n ≤ 1090 ≤ k ≤ 31