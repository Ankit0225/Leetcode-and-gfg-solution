class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int curr_min = arrays[0][0],curr_max = arrays[0].back();
        int ans = 0;

        for(int i=1;i<arrays.size();i++)
        {
            auto arr = arrays[i];

            ans = max(ans,abs(arr.back()- curr_min));
            ans = max(ans,abs(curr_max-arr[0]));

            curr_min = min(curr_min,arr[0]);
            curr_max = max(curr_max,arr.back());
        }
        return ans;
    }
};