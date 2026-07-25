# [Replace Consecutive Two Same with One](https://www.geeksforgeeks.org/problems/consecutive-elements2306/1)
## Easy
Given a string s, consisting of lowercase alphabets. Remove consecutive duplicate characters from the string.&nbsp;
Example:
Input: s = "aabb"
Output: "ab" 
Explanation: The character 'a' at index 2 is the same as 'a' at index 1, so it is removed.Similarly, the character 'b' at index 4 is the same as 'b' at index 3, so it is removed. The final string is "ab".

Input: s = "aabaa"
Output: "aba"
Explanation: The character 'a' at index 2 is the same as 'a' at index 1, so it is removed. The character 'a' at index 5 is the same as 'a' at index 4, so it is removed. The final string is "aba".
Input: s = "aaaa"
Output: "a"
Explanation: "aaaa" =&gt; "aaa" =&gt; "aa" =&gt; "a" 
Constraints:1 ≤ n ≤&nbsp;106All characters in the string are lowercase English alphabets.