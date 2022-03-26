# Numbers with prime frequencies greater than or equal to k
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an array of size N. You need to find elements which appear prime number of times in the array with minimum K frequency (frequency &gt;= K).</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>â€‹Input :</strong> 
N = 13, K = 2
arr[ ] = {11, 11, 11, 23, 11, 37, 51, 
&nbsp;         37, 37, 51, 51, 51, 51}
<strong>Output :</strong> 37 51
<strong>Explanation:
</strong>11's count is 4, 23 count 1, 37 count 3, 
51 count 5. 37 and 51 are two number that 
appear prime number of time and frequencies 
greater than or equal to K=2.

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {11, 22, 33} <strong>
Output :</strong>  -1</span></pre>

<p><br>
<br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>primeOccurences()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n), </strong>integer value&nbsp;<strong>K,</strong>&nbsp;and return the array of the elements that have prime frequency with their frequency &gt;=K in sorted form. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*SQRT(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ K ≤ 100<br>
1 ≤ A[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>