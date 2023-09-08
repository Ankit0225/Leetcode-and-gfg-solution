//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        int n = hospital.size(),m = hospital[0].size();
        int cnt1 = 0;
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(hospital[i][j] == 2)
                {
                    q.push({{i,j},0});
                    visited[i][j] = true;
                }
                if(hospital[i][j] == 1)
                cnt1++;
            }
        }
        int maxsteps = 0,cnt=0;
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            
            q.pop();
            
            maxsteps = max(maxsteps,steps);
            for(int i=0;i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow>=0 && nrow<n && ncol >= 0 && ncol < m &&
                visited[nrow][ncol] == false && hospital[nrow][ncol] == 1)
                {
                    cnt++;
                    q.push({{nrow,ncol},steps + 1});
                    visited[nrow][ncol] = true;
                }
            }
        }
        
        return cnt1 != cnt ? -1 : maxsteps;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        cin>>R>>C;
        vector<vector<int>> hospital;
        int i,j;
        for(i=0;i<R;i++)
         {   vector<int> temp;
             for(j=0;j<C;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            hospital.push_back(temp);
         }
        
        Solution ob;
        int ans = ob.helpaterp(hospital);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends