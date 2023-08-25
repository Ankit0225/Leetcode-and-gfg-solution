# Longest K unique characters substring
## Medium
<div class="problems_problem_content__Xm_eO"><p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px">Given a string you need to print the size of the longest possible substring that has exactly <strong speechify-initial-font-size="17px" style="font-size: 17px;">K&nbsp;unique</strong> characters. If there is no possible substring then print -1.</span></p>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 1:</strong></span></p>
<pre speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input:</strong>
S = "aabacbebebe</span><span style="font-size: 17px;" speechify-initial-font-size="17px">", K = 3
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Output:</strong> <br speechify-initial-font-size="17px" style="font-size: 17px;">7
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Explanation</strong>: <br speechify-initial-font-size="17px" style="font-size: 17px;">"cbebebe" is the longest substring with 3 distinct characters.
</span></pre>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 2:</strong></span></p>
<pre speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input</strong>: 
S = "aaaa", K = 2
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Output:</strong> -1
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Explanation</strong>: <br speechify-initial-font-size="17px" style="font-size: 17px;">There's no substring with 2 distinct characters.
</span></pre>
<p><span style="font-size: 18px;"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Your Task:</strong><br speechify-initial-font-size="17px" style="font-size: 17px;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>longestKSubstr()&nbsp;</strong>which takes the string S and an integer K as input and returns the length of the longest substring with exactly K&nbsp;distinct characters. If there is no substring with exactly K distinct characters then return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(|S|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |S| ≤ 10<sup>5</sup><br>1 ≤ K ≤ 26<br>All characters are lowercase latin characters.</span></p></div>