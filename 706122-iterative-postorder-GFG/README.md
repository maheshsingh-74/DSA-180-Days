# [Iterative Postorder](https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1)
## Medium
Given a binary tree. Find the postorder traversal of the tree without using recursion. Return a list containing the postorder traversal of the tree, calculated&nbsp;without using recursion.
Examples :
Input:
           1
         /   \
        2     3
      /  \
     4    5

Output: 4 5 2 3 1
Explanation: Postorder traversal (Left-&gt;Right-&gt;Root) of the tree is 4 5 2 3 1.

Input:
             8
          /      \
        1          5
         \       /   \
          7     10    6
           \   /
&nbsp;           10 6

Output: 10 7 1 6 10 6 5 8&nbsp;
Explanation: Postorder traversal (Left-&gt;Right-&gt;Root) of the tree is 10 7 1 6 10 6 5 8 .
&nbsp;
Expected time complexity: O(n)
Expected auxiliary space: O(n)
&nbsp;
Constraints:
1 &lt;= Number of nodes &lt;= 1051 &lt;= Data of a node &lt;= 105