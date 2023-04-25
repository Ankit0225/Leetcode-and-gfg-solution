//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int n=arr.size();
        vector<int> left(n),right(n),ans(n);
        stack<int> st1,st2;
        for(int i=0;i<n;i++)
        {
            while(st1.size()>0 && arr[st1.top()]>=arr[i])
            st1.pop();
            if(st1.size()>0)
            {
                left[i]=st1.top();
            }
            else
            {
                left[i]=-1;
            }
            st1.push(i);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(st2.size()>0 && arr[st2.top()]>=arr[i])
            st2.pop();
            if(st2.size()>0)
            {
                right[i]=st2.top();
            }
            else
            {
                right[i]=-1;
            }
            st2.push(i);
        }
        
        for(int i=0;i<n;i++)
        {
            if(left[i]==-1 && right[i]==-1)
            {
                ans[i]=-1;
            }
            else if(left[i]==-1)
            {
                ans[i]=right[i];
            }
            else if(right[i]==-1)
            {
                ans[i]=left[i];
            }
            else if(abs(i-left[i])<abs(i-right[i]))
            {
                ans[i]=left[i];
            }
            else if(abs(i-left[i])>abs(i-right[i]))
            {
                ans[i]=right[i];
            }
            else if(arr[left[i]]<=arr[right[i]])
            {
                ans[i]=left[i];
            }
            else
            {
                ans[i]=right[i];
            }
        }
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends