class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> mat(n,vector<int>(n,0));
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j] = cnt;
                cnt++;
            }
        }
        int finalans = 0,i=0,j=0;
        for(int t=0;t<commands.size();t++)
        {
            if(commands[t] == "DOWN")
            {
                i += 1;
            }
            else if(commands[t] == "RIGHT")
            {
                j+=1;
            }
            else if(commands[t] == "UP")
            {
                i -= 1;
            }
            else
            {
                j-=1;
            }
        }
        return mat[i][j];
    }
};