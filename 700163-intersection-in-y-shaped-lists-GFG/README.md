# [Intersection in Y Shaped Lists](https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)
## Medium
You are given the heads of two non-empty singly linked lists, head1 and head2, that intersect at a certain point. Return that Node where these two linked lists intersect.
Note:&nbsp;It is guaranteed that the intersected node always exists.
In the custom input you have to give input for CommonList which pointed at the end of both head1 and head2 to form a Y-shaped linked list.
Examples:
Input: head1: 10 -&gt; 15 -&gt; 30, head2: 3 -&gt; 6 -&gt; 9 -&gt; 15 -&gt; 30
Output: 15
Explanation: From the above image, it is clearly seen that the common part is 15 -&gt; 30, whose starting point is 15.    
Input: head1: 4 -&gt; 1 -&gt; 8 -&gt; 5, head2: 5 -&gt; 6 -&gt; 1 -&gt; 8 -&gt; 5Output: 1
Explanation: From the above image, it is clearly seen that the common part is 1 -&gt; 8 -&gt; 5, whose starting point is 1.    
Constraints:2 ≤ total number of nodes ≤ 2*105-104 ≤ node-&gt;data ≤ 104