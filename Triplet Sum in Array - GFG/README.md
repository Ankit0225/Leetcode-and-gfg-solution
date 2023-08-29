# Triplet Sum in Array
## Medium
<div class="problems_problem_content__Xm_eO" speechify-initial-font-family="Roboto, sans-serif" speechify-initial-font-size="16px"><p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X. </span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
<span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Example 1:</strong></span></p>

<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Input</strong>:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Output</strong>:
1
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Explanation</strong>:
The triplet {1, 4, 8} in 
the array sums up to 13.</span></pre>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Example 2:</strong></span></p>

<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Input</strong>:
n = 5, X = 10
arr[] = [1 2 4 3 6]
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output</strong>:
1
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Explanation</strong>:
The triplet {1, 3, 6} in 
the array sums up to 10.</span>
</pre>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Your Task:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">find3Numbers()</strong>&nbsp;which takes the array arr[], the size of the array (n) and the sum (X) as inputs and returns True if there exists a triplet in the array arr[] which sums up to X and False otherwise.</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Time Complexity:&nbsp;</strong>O(n<sup speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">2</sup>)<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Constraints:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
1 ≤ n ≤ 10<sup speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">3</sup><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
1 ≤ A[i] ≤ 10<sup speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">5</sup></span></p>
</div>