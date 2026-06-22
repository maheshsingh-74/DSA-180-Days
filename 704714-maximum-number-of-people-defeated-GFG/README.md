# [Maximum Number of People Defeated](https://www.geeksforgeeks.org/problems/killing-spree3020/1)
## Medium
There are infinitely many people standing in a row, indexed from 1. The strength of the person at index i is i².
Given a strength p, determine the maximum number of people that can be defeated. A person with strength x can be defeated only if p ≥ x, after which the strength p decreases by x.
Examples :
Input: p = 14
Output:&nbsp;3
Explanation: The strengths of the first few people are 1, 4, 9, 16, .... Defeating the first three people consumes 1 + 4 + 9 = 14 strength, leaving 0. Therefore, the maximum number of people that can be defeated is 3.

Input: p = 10
Output: 2Explanation: After defeating people with strengths 1 and 4, the remaining strength is 5, which is less than the next required strength 9.
Constraints:1 ≤ p ≤ 3*108