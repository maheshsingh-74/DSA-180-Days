# [Shortest Path in Hierarchical Arrangement](https://www.geeksforgeeks.org/problems/shortest-path-between-cities/1)
## Medium
In a special city, houses are arranged in a hierarchical manner. Starting from house 1, every house is connected to two new houses. For example:

1 is connected to 2 and 3
2 is connected to 4 and 5
3 is connected to 6 and 7
and so on.

Given two house numbers x and y, determine the length of the shortest path between them.
Examples:
Input: x = 2, y = 6
Output: 3
Explanation: The shortest path between 2 and 6 is: 2 -&gt; 1 -&gt; 3 -&gt; 6. Since this path consists of 3 edges, the answer is 3.
Input: x = 8, y = 10
Output: 4
Explanation: The shortest path between 8 and 10 is: 8 -&gt; 4 -&gt; 2 -&gt; 5 -&gt; 10. Since this path consists of 4 edges, the answer is 4.
Constraints:&nbsp;1 ≤ x, y ≤ 109