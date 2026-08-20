<h2><a href="https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1">Good or Bad string</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size:18px">In this problem, a <em>String</em> <strong>S</strong> is composed of lowercase alphabets and wildcard characters i.e. '<strong>?'.</strong> Here, '?' can be replaced by any of the lowercase alphabets. Now you have to classify the given <em>String</em> on the basis of following rules:</span></p>

<p><span style="font-size:18px">If there are more than <strong>3 consonants together or more than 5 vowels together</strong>, the <em>String</em> is considered to be "<strong>BAD</strong>". A <em>String</em> is considered "<strong>GOOD" only if it is not “BAD”</strong>.</span></p>

<p><span style="font-size:18px"><strong>NOTE: </strong><em>String</em> is considered as "BAD" if the above condition is satisfied even once. Else it is "GOOD" and the task is to make the string "BAD".</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>S</strong> = aeioup??
<strong>Output:</strong>
1
<strong>Explanation: </strong>The String doesn't contain more
than 3 consonants or more than 5 vowels together.
So, it's a GOOD string.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
S</strong> = bcdaeiou??
<strong>Output:
</strong>0
<strong>Explanation: </strong>The String contains the
Substring "aeiou??" which counts as 7
vowels together. So, it's a BAD string.</span>
</pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>isGoodorBad</strong><strong>()</strong> which takes the String S as input and returns 0 or 1.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|S|)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |S| &lt;= 100000</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Greedy</code>&nbsp;