# [Meta Strings](https://www.geeksforgeeks.org/problems/meta-strings5713/1)
## Easy
Given two strings s1 and s2 consisting of lowercase english alphabets, check whether these strings are meta strings or not.
Note: Meta strings are the strings which can be made equal by exactly one swap in any of the strings. Equal string are not considered here as Meta strings.
Examples:
Input: s1 = "geeks", s2 = "keegs"
Output: true
Explanation: We can swap the 0th and 3rd character of s2 to make it equal to s1.

Input: s1 = "geeks", s2 = "geeks"
Output: false
Explanation: Equal strings are not considered Meta strings.

Input: s1 = "a", s2 = "b"
Output: false
Explanation: Since there is only character, we cannot do any swap.
Constraints:1 ≤ |s1|, |s2| ≤ 105