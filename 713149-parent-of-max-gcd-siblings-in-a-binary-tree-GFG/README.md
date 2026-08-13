# [Parent of Max GCD Siblings in a Binary Tree](https://www.geeksforgeeks.org/problems/find-the-node-with-maximum-gcd-of-the-siblings-of-a-binary-tree/1)
## Easy
Given a binary tree. The task is to find the Node with maximum GCD of the siblings of this tree. You have to return the value of the node whose two immediate children has the maximum gcd.If there are multiple such nodes, return&nbsp;the node which has the maximum value.
Siblings:&nbsp;Nodes with the same parent are called siblings.
GCD (Greatest Common Divisor)&nbsp;of two positive integers is the largest positive integer that divides both numbers without a remainder.
Note:

Consider those nodes which have a&nbsp;sibling.
Return 0&nbsp;if no such pair of siblings found.

&nbsp;
Example 1:
Input:
              4
            /   \
           5     2
                /  \
               3    1
              /  \
             6   12

Output: 3
Explanation: For the above tree, the maximum
GCD for the siblings is formed for nodes 6 and 12
for the children of node 3.
&nbsp;
Example 2:
Input: 
            1
          /   \
        3      5
      /  \    /  \
     6    9  4    8

Output: 5
Explanation: For the above tree, the maximum
GCD for the siblings is formed for nodes 4 and 8
for the children of node 5.
&nbsp;
Your Task:You don't need to take input. Just complete the function maxGCD() that takes the root node as a parameter and returns the value of the node whose two immediate children has the maximum gcd.
&nbsp;
Expected Time Complexity:&nbsp;O(|Number of nodes|) .Expected Auxiliary Space:&nbsp;O(height of the tree) .
&nbsp;
Constraints:1 &lt;= Number of nodes &lt;= 1051 &lt;= Data of a node &lt;= 105