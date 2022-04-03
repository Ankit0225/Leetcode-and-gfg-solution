# Length Unsorted Subarray
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an unsorted array <strong>Arr</strong> of size <strong>N</strong>. Find the subarray <strong>Arr[s...e]</strong> such that sorting this subarray makes the whole array sorted.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 11
Arr[] ={10,12,20,30,25,40,32,31,35,50,60}
<strong>Output: </strong>3 8
<strong>Explanation:</strong> Subarray starting from index
3 and ending at index 8 is required
subarray. Initial array: 10 12 20 <strong>30 25
40 32 31 35</strong> 50 60 Final array:&nbsp;10 12 20
<strong>25 30 31 32 35 40</strong> 50 60
(After sorting the bold part)</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 9
Arr[] = {0, 1, 15, 25, 6, 7, 30, 40, 50}
<strong>Output:</strong> 2 5
<strong>Explanation:</strong>&nbsp;Subarray starting from index
2 and ending at index 5 is required
subarray.
Initial array: 0 1 <strong>15 25 6 7</strong> 30 40 50
Final array:&nbsp;  0 1 <strong>6 7 15 25</strong> 30 40 50
(After sorting the bold part)</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>printUnsorted</strong><strong>()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong>arr </strong>and&nbsp;<strong>n</strong><strong>&nbsp;</strong>as parameters and returns a pair of integers denoting <strong>{s, e}</strong>.&nbsp;If no such subarray exists, return <strong>{0, 0}</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>7</sup><br>
1 ≤ Arr[i] ≤ 10<sup>8</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>