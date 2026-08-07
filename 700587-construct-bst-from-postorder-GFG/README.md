# [Construct BST from Postorder](https://www.geeksforgeeks.org/problems/construct-bst-from-post-order/1)
## Easy
Given postorder traversal of a Binary Search Tree, you need to construct a BST from postorder traversal. The output will be inorder traversal of the constructed BST.
Examples:
Input: post[] = [1, 7, 5, 50, 40, 10]
Output: [1, 5, 7, 10, 40, 50]
Explanation:
The BST for the given post order traversal is:
  Thus the inorder traversal of BST is: 1 5 7 10 40 50.
Input: post[] = [2, 1, 3, 5]
Output: [1, 2, 3, 5]
Explanation:
The BST for the given post order traversal is:
  
Constraints:1 ≤ n ≤ 105 , n is the number of nodes in BST