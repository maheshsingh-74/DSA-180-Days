# [AVL Tree Insertion](https://www.geeksforgeeks.org/problems/avl-tree-insertion/1)
## Hard
Given the root of a AVL Tree and an integer key, insert the key into the given AVL Tree such that the tree remains a valid AVL Tree after the insertion. The task is to return the root of the updated AVL Tree after inserting the given key.&nbsp;
Note:
 

 The given tree is initially a valid AVL Tree. 
 The key does not already exist in the tree. 

Examples :&nbsp;
Input: root= [4, 2, 6, N, N, N, 8], key = 10Output: Explanation: After inserting 10 in the given tree, it will become Now, the balance factor of node 6 becomes -2, which violates the AVL property.Perform a left rotation on node 6 &amp; we get
Input: root = [20, 9, 25, 1, 15], key = 13Output: Explanation:  After inserting 13 in the given tree, it will becomeNow, the balanced factor of node 20 becomes +2, which violates the AVL property.Perform a left rotation on node 9 &amp; perform a right rotation on 20, we get
