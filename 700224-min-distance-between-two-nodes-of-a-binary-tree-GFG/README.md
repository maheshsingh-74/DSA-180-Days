# [Min distance between two nodes of a Binary Tree](https://www.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1)
## Hard
Given a binary tree with n nodes and two node values a and b, find the minimum distance between them. The distance is defined as the minimum number of edges between the two nodes. It is guaranteed that both nodes exist in the binary tree and all node values are unique.
Examples :
Input:&nbsp;     
a = 2, b = 3
Output: 2
Explanation: The path between node 2 and node 3 is: 2 -&gt; 1 -&gt; 3.The number of edges in this path is 2, so the minimum distance is 2. 
Input:
a = 4, b = 7
Output: 4
Explanation: The path between node 4 and node 7 is: 4 -&gt; 2 -&gt; 1 -&gt; 3 -&gt; 7.The number of edges in this path is 4, so the minimum distance is 4.
Constraints:2 &lt;= number of nodes &lt;= 105