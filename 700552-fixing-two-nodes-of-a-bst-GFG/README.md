# [Fixing Two nodes of a BST](https://www.geeksforgeeks.org/problems/fixed-two-nodes-of-a-bst/1)
## Hard



Given the root of a Binary Search Tree (BST), where exactly two nodes have been swapped by mistake, restore the BST by swapping the values of the misplaced nodes. Return the root of the corrected BST.
&nbsp;
Note: It is guaranteed that exactly two nodes have been swapped, and restoring their values will make the tree a valid BST. The structure of the tree must remain unchanged.



&nbsp;
Examples :
Input: root = [10, 5, 8, 2, 20]
     
Output: [10, 5, 20, 2, 8]       Explanation: The nodes 20 and 8 were swapped. 
Input: root = [5, 10, 20, 2, 8]
     
Output: [10, 5, 20, 2, 8]     
Explanation: The nodes 10 and 5 were swapped.
Constraints:2 ≤ Number of nodes ≤ 1051 ≤ root[i] ≤ 107