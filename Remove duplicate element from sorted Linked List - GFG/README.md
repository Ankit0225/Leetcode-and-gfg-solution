# Remove duplicate element from sorted Linked List
## Easy
<div class="problems_problem_content__Xm_eO"><p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px">Given a singly linked list consisting of <strong speechify-initial-font-size="17px" style="font-size: 17px;">N</strong> nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).</span><br speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Note:</strong> Try not to use extra space. The nodes are arranged in a <strong speechify-initial-font-size="17px" style="font-size: 17px;">sorted </strong>way.</span></p>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 1:</strong></span></p>
<pre speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input:
</strong>LinkedList: 2-&gt;2-&gt;4-&gt;5
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Output: </strong>2 4 5<strong speechify-initial-font-size="17px" style="font-size: 17px;">
Explanation: </strong>In the given linked list 
2 -&gt;2 -&gt; 4-&gt; 5, only 2 occurs more 
than 1 time. So we need to remove it once.</span>
</pre>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input:
</strong>LinkedList: 2-&gt;2-&gt;2-&gt;2-&gt;2
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Output: </strong>2<strong speechify-initial-font-size="17px" style="font-size: 17px;">
Explanation: </strong>In the given linked list 
2 -&gt;2 -&gt;2 -&gt;2 -&gt;2, 2 is the only element
and is repeated 5 times. So we need to remove<br>any four 2.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function&nbsp;<strong>removeDuplicates</strong>() which takes the head of input linked list as input. The function should remove the duplicates from linked list and return the head of the linkedlist.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong> : O(N)<br><strong>Expected Auxilliary Space</strong> : O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes &lt;= 10<sup>5</sup></span></p></div>