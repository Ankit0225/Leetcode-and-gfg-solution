class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
      vector<int> cntnum(*max_element(nums.begin(),nums.end())+1,0);  

      for(auto i : nums)
        cntnum[i]++;
     vector<int> ans;
        for(int i=0;i<cntnum.size();i++)
            if(cntnum[i] == 2)
                ans.push_back(i);
      return ans;
    }
};