<h2><a href="https://www.geeksforgeeks.org/problems/minimum-rotations-to-unlock-a-circular-lock1001/1">Minimum Rotations to Unlock a Circular Lock</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given two positive integers <strong>r</strong> and <strong>d</strong> of the same length, representing the current and desired lock configurations, respectively, where each digit corresponds to a circular ring numbered from 0 to 9, find the minimum number of rotations required to transform r into d.</span></p>
<ul>
<li><span style="font-size: 14pt;">In one operation, a ring can be rotated by one position either clockwise or anticlockwise.</span></li>
<li><span style="font-size: 18.6667px;">The rings are circular, so 9 wraps to 0 and 0 wraps to 9.</span></li>
</ul>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> r = 222, d = 333
<strong>Output:</strong> 3
<strong>Explanation:</strong> Each digit 2 can be changed to 3 in one rotation. Therefore, the minimum total rotations required are 1 + 1 + 1 = 3.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> r = 2345, d = 5432
<strong>Output:</strong> 8
<strong>Explanation:</strong> The minimum rotations required for the corresponding digit pairs (2, 5), (3, 4), (4, 3), and (5, 2) are 3, 1, 1, and 3, respectively. Therefore, the minimum total rotations required are 3 + 1 + 1 + 3 = 8.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematics</code>&nbsp;