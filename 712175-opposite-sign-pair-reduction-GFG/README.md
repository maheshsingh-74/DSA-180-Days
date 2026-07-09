# [Opposite Sign Pair Reduction](https://www.geeksforgeeks.org/problems/opposite-sign-pair-reduction/1)
## Medium
Given an array arr[] , return the final array by repeatedly apply the following operation from left to right until no more valid operations can be performed.
If two adjacent elements have opposite signs:

If their absolute values are different, remove both elements and insert the one with the greater absolute value, preserving its sign.
If their absolute values are equal, remove both elements without inserting any new element.

Examples :&nbsp;
Input: arr[] = [10, -5, -8, 2, -5]
Output: [10]Explanation: At Index 0 : Element 10 has positive sign.
At Index 1 : -5  has lesser absolute value than 10. Replace both of them with 10.
At Index 2 : -8  has lesser absolute value than 10. Replace both of them with 10.
At Index 3 : 2 has positive sign. So it will be in the array.
At Index 4 : -5  has greater absolute value than 2. Replace both of them with 5.
Now -5  has lesser absolute value than 10. Replace both of them with 10.
Input: arr[] = [5, -5, -2, -10]Output: [-2, -10]Explanation: 1st and 2nd element gets discarded because both elements have same values but opposite sign. 3rd and 4th elements have same sign. So, both will be in the array.
Input: arr[] = [-20, 1, 20]Output: []Explanation: 1st and 2nd elements are removed, and -20 is inserted since it has the larger absolute value. Then, the remaining elements [-20, 20] are removed (equal absolute values, opposite signs).
Constraints:1 ≤ arr.size() ≤ 105-10000 ≤ arr[i] ≤ 10000arr[i] != 0