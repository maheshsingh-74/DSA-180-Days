# [Remove Two Consecutive Same](https://www.geeksforgeeks.org/problems/string-manipulation3706/1)
## Easy

Tom is a string freak. He has got sequences of words arr[] to manipulate. If in a sequence, two same words come together then Tom destroys each other. Find the number of words left in the sequence after this pairwise destruction.&nbsp;

Examples:
Input: arr[] = ["ab", "aa", "aa", "bcd", "ab"]
Output: 3
Explanation: After the first iteration, we'll have: ab bcd ab. We can't further destroy more strings and hence we stop and the result is 3. 
Input: arr[] = ["tom", "jerry", "jerry", "tom"]
Output: 0
Explanation: After the first iteration, we'll have: tom tom. After the second iteration: 'empty-array' .Hence, the result is 0.

Constraints:1 ≤ arr.size() ≤1061 ≤ |arri| ≤ 50
