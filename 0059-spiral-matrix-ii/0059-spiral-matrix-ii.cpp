class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));

        int left = 0, right = n - 1, top = 0, bottom = n - 1;
        int cnt = 1;

        while (top <= bottom && left <= right) {

            // left to right
            for (int i = left; i <= right; i++) {
                ans[top][i] = cnt;
                cnt += 1;
            }
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++) {
                ans[i][right] = cnt;
                cnt += 1;
            }
            right--;

            if (top <= bottom) {

                // right to left
                for (int i = right; i >= left; i--) {
                    ans[bottom][i] = cnt;
                    cnt+=1;
                }
                bottom--;
            }

            if (left <= right) {

                // bottom to top
                for (int i = bottom; i >= top; i--) {
                    ans[i][left] = cnt;
                    cnt += 1;
                }
                left++;
            }
        }
        return ans;
    }
};