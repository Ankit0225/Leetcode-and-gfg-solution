class Solution {
public:
    void combinations(int idx,vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int> &res)
    {
        if(target == 0)
        {
            ans.push_back(res);
            return;
        }

        for(int i=idx;i<candidates.size();i++)
        {
            if(i > idx && candidates[i] == candidates[i-1])
                continue;

            if(target < candidates[i])
                break;
            
            res.push_back(candidates[i]);
            combinations(i+1,candidates,target-candidates[i],ans,res);
            res.pop_back();

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> res;

        combinations(0,candidates,target,ans,res);
        return ans;
    }
};