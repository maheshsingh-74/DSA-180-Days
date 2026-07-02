# [Peak element](https://www.geeksforgeeks.org/problems/peak-element/1)
## Medium
You are given an array arr[]&nbsp;where no two adjacent elements are same, find the index of a peak element. An element is considered to be a peak if it is greater than its adjacent elements (if they exist). 
If there are multiple peak elements, Return index of any one of them. The output will be&nbsp;"true"&nbsp;if the index returned by your function is correct; otherwise, it will be "false".
Note: Consider the element before the first element and the element after the last element to be negative infinity.
Examples :
Input: arr = [1, 2, 4, 5, 7, 8, 3]
Output: true
Explanation: arr[5] = 8 is a peak element because arr[4] &lt; arr[5] &gt; arr[6].
Input: arr = [10, 20, 15, 2, 23, 90, 80]
Output: true
Explanation: Element 20 at index 1 is a peak since 10 &lt; 20 &gt; 15. Index 5 (value 90) is also a peak, but returning any one peak index is valid.
Constraints:1&nbsp;≤ arr.size() ≤ 106-231 ≤ arr[i] ≤ 231 - 1