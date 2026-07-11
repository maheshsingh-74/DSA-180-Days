# [Remove K Digits](https://www.geeksforgeeks.org/problems/remove-k-digits/1)
## Medium
Given a non-negative integer s represented as a string and an integer k, remove exactly k digits from the string so that the resulting number is the smallest possible, while maintaining the relative order of the remaining digits.
Note :&nbsp;The resulting number must not contain any leading zeros.If the resulting number is an empty string after the removal, return "0".
Examples:
Input: s = "4325043", k = 3
Output: 2043
Explanation: Remove the three digits 4, 3, and 5 to form the new number "2043" which is smallest among all possible removal.

Input: s = "765028321", k = 5Output: 221
Explanation: Remove the five digits 7, 6, 5, 8 and 3 to form the new number "0221". Since we are not supposed to keep leading 0s, we get "221".
Constraints:1 ≤ k ≤ |s| ≤ 106