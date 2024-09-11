class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xr = start^goal,cnt = 0;
        while(xr)
        {
            xr = xr & (xr - 1);
            cnt++;
        }
        return cnt;
    }
};