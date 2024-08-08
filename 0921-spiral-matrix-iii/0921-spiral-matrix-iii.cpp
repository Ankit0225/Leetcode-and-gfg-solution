class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        vector<int> delrow = {0,1,0,-1},delcol = {1,0,-1,0};
        int r = rStart,c =cStart,steps = 1,dir = 0;
        
        while( ans.size() < rows * cols)
        {
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < steps; j++) {
                    if (r >= 0 && r < rows && c >= 0 && c < cols)
                        ans.push_back({r, c});
                    r += delrow[dir];
                    c += delcol[dir];
                }
                dir = (dir + 1) % 4;
            }
            steps++;
        }
        return ans;
    }
};