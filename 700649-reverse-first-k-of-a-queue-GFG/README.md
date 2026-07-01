# [Reverse first K of a Queue](https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1)
## Easy
Given an integer k&nbsp;and a&nbsp;queue&nbsp;of integers, we need to reverse the order of the first k&nbsp;elements of the queue, leaving the other elements in the same relative order.
Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size() : Returns number of elements in queue.
front() : Finds front item.

Note:&nbsp;The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.
"If the size of queue is smaller than the given k , then return the original queue."
Examples:
Input: q = [1, 2, 3, 4, 5], k = 3Output: [3, 2, 1, 4, 5]Explanation: After reversing the first 3 elements from the given queue the resultant queue will be 3 2 1 4 5
Input: q = [4, 3, 2, 1], k = 4Output: [1, 2, 3, 4] Explanation: After reversing the first 4 elements from the given queue the resultant queue will be 1 2 3 4 
Constraints:1&lt;=q[i]&lt;=1051&lt;=q.size()&lt;=1051&lt;=k&lt;=105