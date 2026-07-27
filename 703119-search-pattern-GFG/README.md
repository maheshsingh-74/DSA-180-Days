# [Search Pattern](https://www.geeksforgeeks.org/problems/search-pattern0205/1)
## Hard
Given two strings, a text string txt and a pattern string&nbsp;pat,&nbsp;both consisting of lowercase English alphabets. Return the starting indices (0-based) of all the occurrences of the pattern string pat in the text string txt.
Note:&nbsp;Return an empty list in case of no occurrences of pattern.
Examples:
Input: txt = "geeksforgeeks", pat = "geek"
Output: [0, 8]
Explanation: The string "geek" occurs twice in txt, one starts at index 0 and the other at index 8.

Input: txt = "abesdu", pat = "edu"
Output: []
Explanation: There's no substring "edu" present in txt.
Input: txt = "aabaacaadaabaaba", pat = "aaba"
Output: [0, 9, 12]
Explanation:
Constraints:1 ≤ txt.size() ≤ 1051 ≤ pat.size() ≤&nbsp;txt.size()