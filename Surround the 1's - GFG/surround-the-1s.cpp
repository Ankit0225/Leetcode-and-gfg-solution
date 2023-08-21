//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size(),m = matrix[0].size();
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               
                if(matrix[i][j] == 1)
                {
                     int cnt=0;
                    for(int delrow = -1;delrow<=1;delrow++)
                    {
                        for(int delcol=-1;delcol<=1;delcol++)
                        {
                            int nrow = i + delrow;
                            int ncol = j + delcol;
                            
                            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
                            matrix[nrow][ncol] == 0)
                            cnt++;
                        }
                    }
                    if(cnt % 2 == 0 && cnt > 0)
                    ans++;
                }
                
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends