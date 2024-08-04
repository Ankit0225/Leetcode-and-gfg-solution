class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod = 1e9 + 7;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        int res = 0;
        for(int i=left-1;i<right;i++)
        {
            res= (res + ans[i]) % mod;
        }
        return res;
    }
};