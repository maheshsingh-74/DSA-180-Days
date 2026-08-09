# [Sorted Linked List to BST](https://www.geeksforgeeks.org/problems/sorted-list-to-bst/1)
## Hard
Given a singly linked list whose elements are sorted in&nbsp;ascending&nbsp;order, construct a height-balanced Binary Search Tree (BST) containing the same elements as the linked list. A height-balanced BST is defined as a binary tree in which the depth difference between the left and right subtrees of every node is at most 1.

It is guaranteed that the linked list does not contain duplicate values.
The middle element would always be the root. In case of even elements, pick the root as second mid as root.
You need to return root of the tree, the preorder traversal is printed by the driver code to test your result.

Examples:
Input: Linked List: 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6-&gt;7Output: 4 2 1 3 6 5 7Explanation: The BST formed using elements of the linked list is shown below.       Hence, the preorder traversal of the tree is 4 2 1 3 6 5 7.

Input: Linked List : 1-&gt;2-&gt;3 &nbsp; &nbsp; &nbsp; Output: 2 1 3Explanation: The BST formed using elements of the linked list is - &nbsp; &nbsp; &nbsp; &nbsp;
Hence, the preorder traversal of this tree is 2 1 3.

Constraints:
1 ≤ Number of Nodes ≤ 105
1 ≤ Value of each node ≤ 106