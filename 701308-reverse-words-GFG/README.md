# [Reverse Words](https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1)
## Easy
Given a string s, reverse the string without reversing its individual words. Words are separated by dots(.).
Note: The string may contain leading or trailing dots(.) or multiple dots(.) between two words. The returned string should only have a single dot(.) separating the words,&nbsp;and no extra&nbsp;dots should be included.
Examples :
Input: s = "i.like.this.program.very.much"Output: "much.very.program.this.like.i"
Explanation: The words in the input string are reversed while maintaining the dots as separators, resulting in "much.very.program.this.like.i".
Input: s = "..geeks..for.geeks."
Output: "geeks.for.geeks"
Explanation: After removing extra dots and reversing the whole string, the input string becomes "geeks.for.geeks".
Input: s = "..home....."
Output: "home"
Explanation: The input string contains only one word with extra dots around it. After removing the extra dots, the output is "home".
Constraints:1 ≤ s.length() ≤ 106String s contains only lowercase English alphabets and dots.