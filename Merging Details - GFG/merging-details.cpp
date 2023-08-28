//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class DisJointSet{
    vector<int> size,parent;
    public:
    DisJointSet(int n)
    {
        size.resize(n+1,1);
        parent.resize(n+1,0);
        
        for(int i=0;i<=n;i++)
        parent[i] = i;
    }
    
    int findParent(int node)
    {
        if(parent[node] == node)
        return parent[node];
        else
        return parent[node] = findParent(parent[node]);
    }
    
    void UnionBySize(int u , int v)
    {
        int UPU = findParent(u);
        int UPV = findParent(v);
        
        if(UPU == UPV)
        return;
        
        if(size[UPU] < size[UPV])
        {
            size[UPV] += size[UPU];
            parent[UPU] = UPV;
        }
        else
        {
            size[UPU] += size[UPV];
            parent[UPV] = UPU;
        }
    }
};
class Solution {
  public:
    vector<vector<string>> mergeDetails(vector<vector<string>>& details) {
        // code here
        int n = details.size();
        DisJointSet ds(n);
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<details[i].size();j++)
            {
                string mail = details[i][j];
                if(mp.find(mail) == mp.end())
                {
                    mp[mail] = i;
                }
                else
                {
                    ds.UnionBySize(mp[mail],i);
                }
            }
        }
        
        vector<string> mergedMail[n];
        for(auto i : mp)
        {
            string mail = i.first;
            int node = ds.findParent(i.second);
            mergedMail[node].push_back(mail);
        }
        
        vector<vector<string>> ans;
        for(int i=0;i<n;i++)
        {
            if(mergedMail[i].size() == 0)
            continue;
            sort(mergedMail[i].begin(),mergedMail[i].end());
            
            vector<string> res;
            res.push_back(details[i][0]);
            
            for(auto it : mergedMail[i])
            {
                res.push_back(it);
            }
            ans.push_back(res);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<string>> adj;

        for (int i = 0; i < n; i++) {
            vector<string> temp;
            string s;
            cin >> s;
            temp.push_back(s);
            int x;
            cin >> x;

            for (int j = 0; j < x; j++) {
                string s1;
                cin >> s1;
                temp.push_back(s1);
            }
            adj.push_back(temp);
        }

        Solution obj;
        vector<vector<string>> res = obj.mergeDetails(adj);
        sort(res.begin(),res.end(),[](const vector<string>& a, const vector<string>& b){
            return a[0]<=b[0];
        });
        cout << "[";
        for (int i = 0; i < res.size(); ++i) {
            cout << "[";
            for (int j = 0; j < res[i].size(); j++) {
                if (j != res[i].size() - 1)
                    cout << res[i][j] << ","
                         << " ";
                else
                    cout << res[i][j];
            }
            if (i != res.size() - 1)
                cout << "], ";
            else
                cout << "]";
        }
        cout << "]"
             << "\n";
    }
}

// } Driver Code Ends