# 9. Hashing for pair - 1
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an array of <strong>distinct</strong> integers&nbsp;and&nbsp;a <strong>sum</strong>. Check if there's a pair with the given sum in the array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 10
arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} 
sum = 14
<strong>Output: 
</strong>1
<strong>
Explanation: 
</strong>arr[] = {</span><span style="font-size:18px">1, 2, 3, 4, 5, 6, 7, 8, 9, 10} 
and sum = 14.&nbsp; There is a pair {4, 10} 
with sum 14.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2
arr[] = {2, 5}
sum = 10
<strong>Output:
</strong>0
<strong>
Explanation: 
</strong>arr[]&nbsp; = {2, 5} and sum = 10. 
There is no pair with sum 10.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to&nbsp;complete the provided function <strong>sumExists ()&nbsp;</strong>which take the array <strong>arr[]</strong>, its size <strong>N,</strong> and an integer <strong>sum&nbsp;</strong>as inputs and returns 1 if there exists a pair with the given sum in the array,&nbsp;else, it returns 0.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000<br>
1 &lt;= arr<sub>i</sub> &lt;= 10<sup>6</sup><br>
1 &lt;= sum &lt;= 1000</span></p>
 <p></p>
            </div>