//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        // n = rows 
        // m = columns
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        vector<int> ans;
        // right
        for(int j=0;j<m;j++)
        {
            if(visited[0][j] == false)
            {
               ans.push_back(matrix[0][j]);
               visited[0][j] = true;
            }
        }
        // down
        for(int i=0;i<n;i++)
        {
            if(visited[i][m-1] == false)
            {
                ans.push_back(matrix[i][m-1]);
                visited[i][m-1] = true;
            }
        }
        
        // left
        
        for(int j=m-1;j>=0;j--)
        {
            if(visited[n-1][j] == false)
            {
                ans.push_back(matrix[n-1][j]);
                visited[n-1][j] = true;
            }
        }
       
        // top
        
        for(int i=n-1;i>=0;i--)
        {
            if(visited[i][0] == false)
            {
                ans.push_back(matrix[i][0]);
                visited[i][0] = true;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends