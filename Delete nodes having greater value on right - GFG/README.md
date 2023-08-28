# Delete nodes having greater value on right
## Medium
<div class="problems_problem_content__Xm_eO"><p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px">Given a singly linked list, remove all the nodes in the list which have any node on their right whose value is greater.&nbsp;</span><span style="font-size: 17px;" speechify-initial-font-size="17px">(Not just immidiate Right , but entire List on the Right)</span></p>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px">&nbsp;</span></p>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 1:</strong></span></p>
<pre speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input:
</strong>LinkedList = 12-&gt;15-&gt;10-&gt;11-&gt;5-&gt;6-&gt;2-&gt;3
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Output: </strong>15 11 6 3<strong speechify-initial-font-size="17px" style="font-size: 17px;">
Explanation: </strong>Since, 12, 10, 5 and 2 are
the elements which have greater elements
on the following nodes. So, after deleting
them, the linked list would like be 15,
11, 6, 3.</span>
</pre>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input:
</strong>LinkedList = 10-&gt;20-&gt;30-&gt;40-&gt;50-&gt;60
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Output: </strong>60<br speechify-initial-font-size="17px" style="font-size: 17px;"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Explanation: </strong>All the nodes except the last<br speechify-initial-font-size="17px" style="font-size: 17px;">node has a greater value node on its right,<br>so all the nodes except the last node must<br>be removed.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function <strong>compute</strong>() which should modify the list as required and return the head of the modified linked list.&nbsp;The <strong>printing </strong>is done by the <strong>driver </strong>code,</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ size of linked list ≤ 10<sup>5</sup><br>1 ≤ element of linked list ≤ 10<sup>5</sup><br><strong>Note</strong>: Try to solve the problem without using any extra space.</span></p></div>