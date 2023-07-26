//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        queue<int> q1;
        int c = q.size()/2;
        while(c--)
        {
            q1.push(q.front());
            q.pop();
        }
        vector<int> v;
        while(!q1.empty() && !q.empty())
        {
            v.push_back(q1.front());
            v.push_back(q.front());
            q1.pop();
            q.pop();
        }
        while(!q1.empty())
        {
            v.push_back(q1.front());
            q1.pop();
        }
        while(!q.empty())
        {
            v.push_back(q.front());
            q.pop();
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends