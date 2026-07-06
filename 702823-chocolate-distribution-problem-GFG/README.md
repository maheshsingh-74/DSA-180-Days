# [Chocolate Distribution Problem](https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1)
## Easy
Given an array arr[] of positive integers, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets among m students such that - &nbsp; &nbsp; &nbsp; i. Each student gets exactly one packet.&nbsp; &nbsp; &nbsp;ii. The difference between maximum number of chocolates given to a student and minimum number is minimum and return that minimum possible difference.
Examples:
Input: arr = [3, 4, 1, 9, 56, 7, 9, 12], m = 5
Output: 6
Explanation: The minimum difference between maximum chocolates and minimum chocolates is 9 - 3 = 6 by choosing m packets as [3, 4, 9, 7, 9].

Input: arr = [7, 3, 2, 4, 9, 12, 56], m = 3
Output: 2
Explanation: The minimum difference between maximum chocolates and minimum chocolates is 4 - 2 = 2 by choosing m packets as [3, 2, 4].
Input: arr = [3, 4, 1, 9, 56], m = 5
Output: 55Explanation: With 5 packets for 5 students, each student will receive one packet, so the difference is 56 - 1 = 55.
Constraints:1 ≤ m ≤ arr.size ≤ 1051 ≤ arr[i] ≤ 109