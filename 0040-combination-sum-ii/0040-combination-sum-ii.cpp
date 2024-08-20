class Solution {
public:
    void solve(int idx,vector<int> &nums,int target,vector<int> &res,vector<vector<int>> &ans,int n)
    {
        if(target == 0)            
        {
                ans.push_back(res);
            return;
        }

        for(int i = idx;i<n;i++)
        {
            if(i>idx && nums[i] == nums[i-1])
                continue;
            if(nums[i]>target)
                break;
            res.push_back(nums[i]);
            solve(i+1,nums,target-nums[i],res,ans,n);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin(),candidates.end());

        solve(0,candidates,target,res,ans,candidates.size());
        return ans;
    }
};