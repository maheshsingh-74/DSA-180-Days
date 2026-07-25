# [Isomorphic Strings](https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1)
## Easy
Given two strings s1 and s2 consisting only of lowercase English letters and having the same length, check whether they are isomorphic. Two strings are isomorphic if:

Each character in s1 must always map to the same character in s2.
No two different characters in s1 can map to the same character in s2.
A character may map to itself.

Return true if s1 and s2 are isomorphic, otherwise return false.
Examples:
Input: s1 = "aab", s2 = "xxy"
Output: true
Explanation: Each character in s1 can be consistently mapped to a unique character in s2 (a -&gt; x, b -&gt; y).

Input: s1 = "aab", s2 = "xyz"
Output: false
Explanation: Same character 'a' in s1 maps to two different characters 'x' and 'y' in s2.
Input: s1 = "abc", s2 = "xxz"
Output: false
Explanation: Two different characters 'a' and 'b' in s1 maps with same character 'x' in s2. 
Constraints:1 ≤ s1.size() = s2.size() ≤ 105