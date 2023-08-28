# Account Merge
## Hard
<div class="problems_problem_content__Xm_eO" speechify-initial-font-family="Roboto, sans-serif" speechify-initial-font-size="16px"><p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Given a list&nbsp;of <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">accounts</strong> where each element <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">accounts [ i ] </strong>is a list&nbsp;of strings, where the first element <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">account [ i ][ 0 ]&nbsp;</strong> is a<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"> name</strong>, and the rest of the elements are<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"> emails</strong> representing emails of the account.<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
Now, we would like to merge these accounts. Two accounts definitely belong to the same person if there is some common email to both accounts. Note that even if two accounts have the same name, they may belong to different people as people could have the same name. A person can have any number of accounts initially, but all of their accounts definitely have the same name.<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
After merging the accounts, return the accounts in the following format: the first element of each account is the name, and the rest of the elements are emails <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">in</strong> <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">sorted order</strong>.<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Note</strong>: Accounts themselves can be returned in <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">any order</strong>.</span><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
&nbsp;</p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Input:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
N = 4<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
accounts [ ] =<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
[["John","johnsmith@mail.com","john_newyork@mail.com"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
["John","johnsmith@mail.com","john00@mail.com"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
["Mary","mary@mail.com"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
["John","johnnybravo@mail.com"]]<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
[["John","john00@mail.com","john_newyork@mail.com", "johnsmith@mail.com"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Mary","mary@mail.com"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["John","johnnybravo@mail.com"]]<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Explanation:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
The first and second John's are the same person as<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
they have the common email "johnsmith@mail.com".<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
The third John and Mary are different people as none<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
of their email addresses are used by other accounts.<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
We could return these arrays&nbsp;in any order, for example,<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
the answer [['Mary', 'mary@mail.com'],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
['John', 'johnnybravo@mail.com'],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
['John', 'john00@mail.com', 'john_newyork@mail.com',<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
'johnsmith@mail.com']]<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
would still be accepted.</span></div>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">&nbsp;</p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Input:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
N = 5<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
accounts [ ] =<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
[["Gabe","Gabe00@m.co","Gabe3@m.co","Gabe1@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Kevin","Kevin3@m.co","Kevin5@m.co","Kevin0@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Ethan","Ethan5@m.co","Ethan4@m.co","Ethan0@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Hanzo","Hanzo3@m.co","Hanzo1@m.co","Hanzo0@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Fern","Fern5@m.co","Fern1@m.co","Fern0@m.co"]]<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
[["Ethan","Ethan0@m.co","Ethan4@m.co","Ethan5@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Gabe","Gabe0@m.co","Gabe1@m.co","Gabe3@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Hanzo","Hanzo0@m.co","Hanzo1@m.co","Hanzo3@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Kevin","Kevin0@m.co","Kevin3@m.co","Kevin5@m.co"],<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
["Fern","Fern0@m.co","Fern1@m.co","Fern5@m.co"]]<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Explanation:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
We don't have any common emails in any of the users.<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
We just sorted the emails of each person and we return a array of emails.(The details can be returned in any order).</span></div>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">&nbsp;</p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Your Task:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">accountsMerge</strong><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">()&nbsp;</strong>which takes a list of list of strings details representing <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">accounts</strong>&nbsp;&nbsp;as parameter and returns a&nbsp;list of list of strings denoting the details&nbsp;after merging.</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Time Complexity:</strong>&nbsp;O(N*M*logN) - where N is the size of accounts&nbsp;and M is the size of number of strings for a name.<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Auxiliary Space:</strong>&nbsp;O(N*M) - where N is the size of accounts&nbsp;and M is the size of number of strings for a name.</span><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
&nbsp;</p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Constraints:</strong></span></p>

<ul speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
	<li speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">1 &lt;= N&nbsp;&lt;= 1000</span></li>
	<li speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">2 &lt;= accounts[ i ].size&nbsp;&lt;= 10</span></li>
	<li speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">1 &lt;= accounts[ i ][ j ].size&nbsp;&lt;= 30</span></li>
	<li speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">accounts[i][0]&nbsp;consists of English letters.</span></li>
</ul>
</div>