//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

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
    
    void UnionBySize(int u,int v)
    {
        int UPU = findParent(u);
        int UPV = findParent(v);
        
        if(findParent(u) == findParent(v))
        return;
        
        if(size[UPV] > size[UPU])
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

class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        // code here
        int n = accounts.size();
        DisJointSet ds(n);
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<accounts[i].size();j++)
            {
                string mail = accounts[i][j];
                if(mp.find(mail) == mp.end())
                {
                    mp[mail] = i;
                }
                else
                {
                    ds.UnionBySize(i,mp[mail]);
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
            res.push_back(accounts[i][0]);
            
            for(auto it : mergedMail[i])
            res.push_back(it);
            
            ans.push_back(res);
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
    vector<vector<string>> accounts;

    for (int i = 0; i < n; i++)
    {
      vector<string> temp;
      int x;
      cin >> x;

      for (int j = 0; j < x; j++)
      {
        string s1;
        cin >> s1;
        temp.push_back(s1);
      }
      accounts.push_back(temp);
    }

    Solution obj;
    vector<vector<string>> res = obj.accountsMerge(accounts);
    sort(res.begin(), res.end());
    cout << "[";
    for (int i = 0; i < res.size(); ++i)
    {
      cout << "[";
      for (int j = 0; j < res[i].size(); j++)
      {
        if (j != res[i].size() - 1)
          cout << res[i][j] << ","
               << " ";
        else
          cout << res[i][j];
      }
      if (i != res.size() - 1)
        cout << "], " << endl;
      else
        cout << "]";
    }
    cout << "]"
         << endl;
  }
}
// } Driver Code Ends