class Solution {
public:
    void solve(int idx,vector<int> &nums,int target,vector<int> &res,vector<vector<int>> &ans,int n)
    {
        if(idx == n)
        {
            if(target == 0)
                ans.push_back(res);
            return;
        }

        if(nums[idx] <= target)
        {
            res.push_back(nums[idx]);
            solve(idx,nums,target - nums[idx],res,ans,n);
            res.pop_back();
        }
        solve(idx + 1,nums,target,res,ans,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        vector<vector<int>> ans;
        solve(0,candidates,target,res,ans,candidates.size());

        return ans;
    }
};