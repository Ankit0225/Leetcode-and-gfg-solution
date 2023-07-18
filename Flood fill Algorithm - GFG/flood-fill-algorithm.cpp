//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void BFS(int row,int col,vector<vector<int>> &ans,vector<vector<int>> &image,int newColor,int iniColor,vector<vector<bool>> &visited)
    {
        int n = image.size();
        int m = image[0].size();
        visited[row][col]=true;
        ans[row][col] = newColor;
        queue<pair<int,int>> q;
        q.push({row,col});
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

           

            for(int i=0;i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && visited[nrow][ncol]==false)
                {
                    visited[nrow][ncol]=true;
                    ans[nrow][ncol]=newColor;
                    q.push({nrow,ncol});
                }
            } 
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> ans=image;
        int iniColor = image[sr][sc];
        int n = image.size(),m = image[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        BFS(sr,sc,ans,image,newColor,iniColor,visited);
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
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends