//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void permutations(int idx,vector<string> &ans,string S)
	{
	    if(idx==S.length())
	    {
	        ans.push_back(S);
	        return;
	    }
        for(int i = idx; i < S.size(); i++){
                if(i != idx && S[i] == S[idx]){
                    continue;
                }
                swap(S[i],S[idx]);
                permutations(idx+1,ans,S);
            }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    vector<string> ans;
		    permutations(0,ans,S);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends