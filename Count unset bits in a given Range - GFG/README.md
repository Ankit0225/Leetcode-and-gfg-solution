# Count unset bits in a given Range
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a non-negative number&nbsp;<strong>n</strong>&nbsp;and two values&nbsp;<strong>l</strong>&nbsp;and&nbsp;<strong>r</strong>. The problem is to count the number of unset bits in the range&nbsp;<strong>l</strong>&nbsp;to&nbsp;<strong>r</strong>&nbsp;in the binary representation of&nbsp;<strong>n</strong>, i.e. to count unset bits from the rightmost&nbsp;<strong>lth</strong>&nbsp;bit to the rightmost&nbsp;<strong>rth</strong>&nbsp;bit.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>n =</strong> 42, <strong>l =</strong> 2, <strong>r =</strong> 5
<strong>Output:</strong>
2
<strong>Explanation:</strong>
(42)<sub>10</sub> = (1<strong>0101</strong>0)<sub>2</sub>
There are '2' unset bits in the range 2 to 5.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>n =</strong> 80, <strong>l =</strong> 1, <strong>r =</strong> 4
<strong>Output:</strong>
4
<strong>Explanation:</strong>
(80)<sub>10</sub> = (101<strong>0000</strong>)<sub>2</sub>
There are '4' unset bits in the range 1 to 4.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>countUnsetBits()</strong> which takes 3 Integers n, a, and b as input and returns the count of unset bits in the given range of [l, r].</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(log(n))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= n &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= l &lt;= r &lt;= 17</span></p>
</div>