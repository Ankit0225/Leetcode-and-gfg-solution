//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void make_permutations(int index,string S,vector<string> &ans)
    {
        if(index==S.length())
        {
            ans.push_back(S);
            return;
        }
        for(int i=index;i<S.size();i++)
        {
            swap(S[index],S[i]);
            make_permutations(index+1,S,ans);
            swap(S[index],S[i]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        make_permutations(0,S,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends