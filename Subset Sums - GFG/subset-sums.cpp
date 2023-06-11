//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void sumsubset(int idx,int sum,vector<int> &arr,vector<int> &res,int N)
    {
        if(idx==arr.size())
        {
            res.push_back(sum);
            return;
        }
        sum+=arr[idx];
        sumsubset(idx+1,sum,arr,res,N);
        sum-=arr[idx];
        sumsubset(idx+1,sum,arr,res,N);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        sumsubset(0,0,arr,ans,N);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends