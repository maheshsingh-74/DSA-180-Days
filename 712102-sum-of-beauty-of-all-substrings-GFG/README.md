# [Sum of Beauty of All Substrings](https://www.geeksforgeeks.org/problems/sum-of-beauty-of-all-substrings-1662962118/1)
## Medium
Given a&nbsp;string S, return the sum of beauty of all its substrings.The beauty of a string is defined as the difference in frequencies between the most frequent and least frequent characters.

For example, the beauty of string "aaac" is 3 - 1 = 2.

Example 1:
Input:S = "aaac"Output: 3Explanation:&nbsp;The substrings with non - zero&nbsp;beauty are ["aaac","aac"] where beauty of "aaac" is 2 and beauty of "aac" is 1.
&nbsp;
Example 2:
Input:S = "geeksforgeeks"Output: 62Explanation: There are 91&nbsp;substrings of the given strings.Like, the beauty of substring "geek" is 1. In this way the sum of&nbsp;beauties of all substrings are 62.
Your Task:You don't need to read input or print anything. Your task is to complete the function beautySum() which takes&nbsp;string S as input paramters&nbsp;and returns the sum of beauty of all its substrings.&nbsp;
Expected Time Complexity: O(|S|2)Expected Auxiliary Space: O(1)
Constraints:&nbsp;1 ≤ |S|&nbsp;≤ 500S only contains lower case alphabets.